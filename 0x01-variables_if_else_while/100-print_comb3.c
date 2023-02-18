#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combinations of two digits
 * numbers must be separated by ,, followed by a space
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * prints only the smallest combination of two digits
 * numbers should be printed in ascending order, with two digits
 * you can only use the putchar function
 * (every other function (printf, puts, etc...) is forbidden)
 * you can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * all you code should be in the main function
 * Return: always 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}

