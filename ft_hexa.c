/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:11:04 by kguillem          #+#    #+#             */
/*   Updated: 2025/01/20 19:25:16 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
/*
int	lowhex(unsigned int hex)
{

}

int	upphex(unsigned int hex)
{
	ft_toupper(lowhex(hex));
}
*/
/*
int	ptrval(void *ptr)
{
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		ft_putstr_fd((char*)ptr, 0);
		return (ft_strlen(ptr));
	}
}
*/
void	convert(unsigned int nbr)
{
	unsigned int	remainder;
	unsigned int	quotient;
	char	c;
	char	digit;

	c = 'a';
	digit = '0';
	remainder = nbr % 16;
	quotient = nbr / 16;
	//condition
	{
		if (remainder > 9)
		{
			ft_putchar_fd((c + remainder - 10), 1);
		}
		else
		{
			ft_putchar_fd((digit + remainder), 1);
		}
	}
}

int	main(void)
{
	int	nbr = 1024;
	convert(nbr);
	return (0);
}
