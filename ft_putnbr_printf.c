/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:05:42 by kguillem          #+#    #+#             */
/*   Updated: 2025/01/10 14:11:49 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_printf(int n)
{
	char	c;
	int	len;
	       
	len = 0;
	if (n == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
	{
		len += ft_putnbr_printf(n / 10);
	}
	c = (n % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}
