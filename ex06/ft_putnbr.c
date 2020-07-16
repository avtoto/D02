#include <unistd.h>

void ft_putchar (int nb)

 {
	 write (1,&nb ,1);
 }

void ft_putnbr (int nb)
{
	if ((nb / 10) > 0)
		ft_putchar(nb / 10);
		ft_putchar(nb % 10 + '0');
}

 int main ()
 { 
	ft_putnbr(42);
	ft_putchar('\n');
	return 0;
 } 
