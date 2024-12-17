/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:11:04 by kguillem          #+#    #+#             */
/*   Updated: 2024/12/17 19:13:07 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
int	lowhex(unsigned int hex)
{

}

int	upphex(unsigned int hex)
{

}
*/
int	ptrval(void *ptr)
{
	if (ptr == NULL)
	{
		ft_putstr("(nil)");
		return (0);
	}
	else
	{
		ft_putstr((char*)ptr);
		return (ft_strlen(ptr));
	}
}

int	main(void)
{
	char	*ptr = "test";

	printf("%p\n", ptr);
	ptrval(ptr);
	return (0);
}
