/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:59:44 by kguillem          #+#    #+#             */
/*   Updated: 2025/01/20 18:06:22 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

int	ft_putstr_printf(char *str);

int	ft_putnbr_printf(int n);

int	ft_putunnbr_printf(unsigned int n);

int	ft_printf(char *str, ...)

{
	int	i;
	int	len;
	va_list arglst;

	len = 0;
	i = 0;
	va_start(arglst, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			if (str[i] == 'd' || str[i] == 'i')
				len +=	ft_putnbr_printf(va_arg(arglst, int));
			if (str[i] == 's')
			{
				len += ft_putstr_printf(va_arg(arglst, char*));
			}
			if (str[i] == 'u')
				len += ft_putunnbr_printf(va_arg(arglst, unsigned int)); 
			if (str[i] == '%')
			{
				len++;
				ft_putchar_fd('%', 1);
			}
			if (str[i] == 'c')
			{
				len ++;
				ft_putchar_fd(va_arg(arglst, int), 1);
			}
			if (str[i] == 'x')
			{
			}
			if (str[i] == 'X')
			{
			}
			if (str[i] == 'p')
			{
			}
			
		}
		else
		{
			write(1, &str[i], 1);
			len ++;
		}
		i ++;
	}
	va_end(arglst);
	return (len);
}

#include <stdio.h>

int	main(void)
{
	unsigned int	ch = 45822;
	int	i = 0;
	i = printf("%u\n", ch);
	printf("%d\n", i);
	printf("=========================\n");
	i = ft_printf("%u\n", ch);
	printf("%d\n", i);
	return (0);
}
/**
  s : string (et penser au (null) )
  d i : int
 * x : low hexa
 * X : hexa (en maj)
 * p : put pointer (put low hexa, en rajoutant 0x avant ( et penser au (nil) ))
  c : putchar mdr
  u : put unsigned number 
  %% : afficher %
**/
