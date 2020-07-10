/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:24:04 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/10 13:45:19 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
void 	ft_print_alphabet(void)
{
		char letter;

		letter= 'z';

		while (letter >= 'a')
				{
					ft_putchar(letter);
					letter--;
				}
}

int    main(void)
{
	   ft_print_alphabet();
	   return 0;
}

