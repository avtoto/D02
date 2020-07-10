#include <unistd.h>
#include <stdio.h>

void ft_putchar(int c)

{ 
	write (1,&c,1);

}

void ft_print_comb(void)
{
	int num1;
	int num2;
	int num3;

	num1 = '0' -1;
	while (++num1 <= '9'
	{
		num2 = num1;
		while(++num2 <= '9')
		{
			num3 = num2;
			while(++num3 <= '9')
			{
				if (num1 != '\0' || num2 != '1' || num3 != '2')
					ft_putchar(',');
				if (num1 != '\0' || num2 != '1' || num3 != '2')
					ft_putchar(' ');
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
			}
		}
	}
	ft_putchar('\n');
}

int main ()
{
	ft_print_comb();

	return 0;

}

