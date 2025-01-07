/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:59:44 by kguillem          #+#    #+#             */
/*   Updated: 2025/01/07 17:50:10 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

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
				//	len += ft_putnbr_fd(va_arg(arglst, int), 0);
			if (str[i] == 's')
			{
				len += ft_strlen(va_arg(arglst, char*));
				if (va_arg(arglst, char*) != NULL)
					ft_putstr_fd(va_arg(arglst, char*), 0);
				else
					ft_putstr_fd("(null)", 0);
			}
			if (str[i] == 'u')
				len += 0; // XXX
			if (str[i] == '%')
			{
				len++;
				ft_putchar_fd('%', 0);
			}
			if (str[i] == 'c')
			{
				len ++;
				ft_putchar_fd(va_arg(arglst, int), 0);
			}
			if (str[i] == 'u')
			{
			//	len += uintlen(va_arg(arglst, unsigned int));
			//	affuint(va_arg(arglst, unsigned int));
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
//	char*	str = "test";
	int	i = 0;
	i = printf("%%  --- %s");
	printf("%d\n", i);
	printf("%%\n");
	i = ft_printf("%%");
	printf("%d\n", i);
	ft_printf("%%\n");
	return (0);
}
/**
  s : string (et penser au (null) )
  d i : int
 * x : low hexa
 * X : hexa (en maj)
 * p : put pointer (put low hexa, en rajoutant 0x avant ( et penser au (nil) ))
  c : putchar mdr
 * u : put unsigned number 
  %% : afficher %
**/
