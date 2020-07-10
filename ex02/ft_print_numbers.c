/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:01:06 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/10 14:22:06 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void    ft_putchar(char c)
{
	write(1, &c, 1);
}
void    ft_print_numbers(void)
{
	    char number;
		char i;

		number = '0';
		i = '9';


		while (number <= '9')
		{
			ft_putchar(number);
			number++;
		}
}

int     main(void)
{
	    ft_print_numbers();
		return 0;
}

	

	
