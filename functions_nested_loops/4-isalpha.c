#include <stdio.h>

/**
 * _isalpha - Checks if the character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
(return 1;)
}
(return 0;)
}

int main(void)
{
char test_char1 = 'A';
char test_char2 = 'b';
char test_char3 = '1';

printf("%c: %d\n", test_char1, _isalpha(test_char1));
printf("%c: %d\n", test_char2, _isalpha(test_char2));
printf("%c: %d\n", test_char3, _isalpha(test_char3));

(return 0;)
}

