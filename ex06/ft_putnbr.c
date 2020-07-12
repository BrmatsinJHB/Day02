/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:07:34 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/12 15:37:17 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void   ft_putnbr(int nb)
{
	   if(nb < 0 && nb > 10)
	   {	
		   	nb = nb + 48;
	   		ft_putchar(nb);
	   }

	   else if (nb >= 10)
	   {
	   		ft_putnbr(nb / 10 );
			ft_putchar( nb % 10 + 48);
	   }
}

int    main(void)
{
	ft_putnbr(3);
	return(0);
}

