/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 01:14:22 by kguillem          #+#    #+#             */
/*   Updated: 2025/01/28 01:20:00 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_putstr_printf(char *str);
int	ft_putnbr_printf(int n);
int	ft_putunnbr_printf(unsigned int n);
int	lowhex(unsigned int nbr);
int	upphex(unsigned	int nbr);
int	ptrval(void	*ptr);
int	putchar_printf(char c);

#endif
