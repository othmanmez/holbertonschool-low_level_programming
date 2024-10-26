#include "main.c"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * This function prints the time from 00:00 to 23:59,
 * one minute at a time.
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0;

