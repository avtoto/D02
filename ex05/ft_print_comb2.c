#include <unistd.h>
#include <stdio.h>

void ft_putchar (int c)

{
	write (1,&c,1);

}

void ft_print_comb2 (void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	num1 = '0' -1;
	while (++num1 <= '9')
	{
		num2 = num1;
		num2 = '0' -1;
		while(++num2 <= '9')
		{
			num3 = num2;
			num3 = '0' -1;
			while (++num3 <= '9')
			{
				 num4 = num3;
				while (++num4 <= '9')
				{
					ft_putchar(num1);
					ft_putchar(num2);
				if (num1 != '\0' || num2 != '1')
					ft_putchar(' ');
			/*	if (num1 != '\0' || num2 != '1')
					ft_putchar(' ');*/
				/*ft_putchar(num1);
				ft_putchar(num2);*/
				ft_putchar(num3);
				ft_putchar(num4);

				if (num3 != '\0'|| num4 != '1')
					ft_putchar(',');
				}
			}
		}
	}
	
	ft_putchar('\n');
}

int main()
{
	ft_print_comb2();
	return(0);
}
