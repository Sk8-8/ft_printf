/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:59:44 by kguillem          #+#    #+#             */
/*   Updated: 2024/12/17 19:03:48 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

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
				//len += ft_putnbr(va_arg(arglst, int));
			if (str[i] == 's')
			{
				len += ft_strlen(va_arg(arglst, char*));
				if (va_arg(arglst, char*) != NULL)
					ft_putstr(va_arg(arglst, char*));
				else
					ft_putstr("(null)");
			}
			if (str[i] == 'u')
				len +=
			if (str[i] == '%')
			{
				len ++;
				ft_putchar('%');
			}
			if (str[i] == 'c')
			{
				len ++;
				ft_putchar(va_arg(arglst, char));
			}
			if (str[i] == 'u')
			{
				len += uintlen(va_arg(arglst, unsigned int));
				affuint(va_arg(arglst, unsigned int));
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


	}
	va_end(arglst);
	return (len);
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
 * */

