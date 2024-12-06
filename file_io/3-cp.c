#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Copies content from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * 
 * Return: 0 on success, exit with appropriate error code on failure
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, read_bytes, write_bytes;
    char buffer[1024];
    struct stat st;

    /* Check if the number of arguments is correct */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Open the source file (file_from) */
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Check if the destination file (file_to) exists, and truncate it */
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        exit(99);
    }

    /* Copy the contents of file_from to file_to */
    while ((read_bytes = read(file_from, buffer, sizeof(buffer))) > 0)
    {
        write_bytes = write(file_to, buffer, read_bytes);
        if (write_bytes != read_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(99);
        }
    }

    /* Check if read() failed */
    if (read_bytes == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(file_from);
        close(file_to);
        exit(98);
    }

    /* Close the source file */
    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    /* Close the destination file */
    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}

