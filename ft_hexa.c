/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:11:04 by kguillem          #+#    #+#             */
/*   Updated: 2025/01/07 15:32:50 by kguillem         ###   ########.fr       */
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
int	ptrval(void *ptr)
{
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 0);
		return (0);
	}
	else
	{
		ft_putstr_fd((char*)ptr, 0);
		return (ft_strlen(ptr));
	}
}
/*
int	main(void)
{
	char	*ptr = "";

	printf("%p\n", ptr);
	ptrval(ptr);
	return (0);
}*/
