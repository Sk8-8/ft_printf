/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:59:44 by kguillem          #+#    #+#             */
/*   Updated: 2025/01/27 20:17:15 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

//#include "libft/libft.h"

int	ft_putstr_printf(char *str);

int	ft_putnbr_printf(int n);

int	ft_putunnbr_printf(unsigned int n);

int	lowhex(unsigned int nbr);

int	upphex(unsigned	int nbr);

int	ptrval(void	*ptr);

int	putchar_printf(char c);

int	selector(char select, va_list arglst)
{
	int	len;

	len = 0;
	if (select == 'd' || select == 'i')
		len += ft_putnbr_printf(va_arg(arglst, int));
	if (select == 's')
		len += ft_putstr_printf(va_arg(arglst, char *));
	if (select == 'u')
		len += ft_putunnbr_printf(va_arg(arglst, unsigned int));
	if (select == '%')
		len += putchar_printf('%');
	if (select == 'c')
		len += putchar_printf(va_arg(arglst, int));
	if (select == 'x')
		len += lowhex(va_arg(arglst, unsigned int));
	if (select == 'X')
		len += upphex(va_arg(arglst, unsigned int));
	if (select == 'p')
		len += ptrval(va_arg(arglst, void *));
	return (len);
}

int	ft_printf(char *str, ...)
{
	int		i;
	int		len;
	va_list	arglst;

	len = 0;
	i = 0;
	va_start(arglst, str);
	while (str[i])
	{
		if (str[i] == '%' && ++i)
			len += (selector(str[i], arglst));
		else
			len += write(1, &str[i], 1);
		i ++;
	}
	return (va_end(arglst), len);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	i = printf("%%\n");
	printf("%d\n", i);
	printf("=========================\n");
	i = ft_printf("%%\n");
	printf("%d\n", i);
	return (0);
}*/
