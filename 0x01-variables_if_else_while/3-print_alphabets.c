#include <stdio.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
        char i;
	char j;

        for (i = 'a'; i <= 'z'; i++)
        {
                putchar(i);
        }
	for (j = 'A'; j <= 'Z'; j++)
        {
                putchar(j);
        }
        putchar('\n');
        return (0);
}
