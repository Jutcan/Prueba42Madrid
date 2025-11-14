#include <unistd.h>

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 9)
	{
		write (1, a, 4);
		b = 0;
		while (b <= 9)
		{
			write (1, b, 4);
			c = 0;
			while (c <= 9)
			{
				write (1, c, 4);
				if (a != b && a != c && b != c)
				{
					
				}
				c++;
			}
			b++;
		}
		a++;
	}

}

void main(void)
{
	ft_print_comb();
}
