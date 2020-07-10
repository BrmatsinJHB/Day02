/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:26:36 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/10 15:48:42 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_is_negative(int n)
{
	    if (n < 0)
		{
			ft_putchar ('N');
		}

		else if (n > 0)
		{
			ft_putchar ('P');
		}
}

int     main()
{
	ft_is_negative(-8);
	return(0);
}

	    
		
		

		
	   
	  




		
		
	    
