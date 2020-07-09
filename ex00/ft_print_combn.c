	#include <unistd.h>

	void ft_putchar (char c)
	{
		write(1,&c,1);
	}

	void  ft_print_alphabet(void) 
	{
		char c = 'a';
		char b = 'z';

		while(c <= b)
		{
			ft_putchar(c++);
		}

	
	}
		int	main()
	{

      ft_print_alphabet();

		return 0;

		}

