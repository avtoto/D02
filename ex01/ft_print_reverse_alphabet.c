/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avtoto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:26:12 by avtoto            #+#    #+#             */
/*   Updated: 2020/07/09 16:30:35 by avtoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 	#include <unistd.h>

	void ft_putchar (char b)
    {
		write(1,&b,1);
	}	

	void ft_print_reverse_alphabet(void)
    {
		char b = 'z';
		char c = 'a';

		while (b >= c)
		{
			ft_putchar(b);
			b--;

		}

	} 
		int main ()
	{

		ft_print_reverse_alphabet();

			return 0;
		}

