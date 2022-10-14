#include <stdio.h>

/**
 *	* main - write a code to write possible comb of three digits
 *
 *	* we can only use putchar 8 times
 *
 *	* Return: 0 if successful
 *
 */

int main(void)
{
	int a, b, c, d, at1, at2;

a = b = c = d = 48;
while (d < 58)
{
	c = 48;
	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				at1 = (d * 10) + c;
				at2 = (b * 10) + a;
				if (at1 < at2)
				{
					putchar(d);
					putchar(c);
					putchar(' ');
					putchar(b);
					putchar(a);
					if (d == 57 && c == 56 && b == 57 && a == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	d++;
}
putchar('\n');

return (0);
}
