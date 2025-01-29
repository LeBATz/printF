/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_PP1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:14:32 by rdavid-g          #+#    #+#             */
/*   Updated: 2025/01/29 21:41:01 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(int r)
{
	return (write(1, &r, 1));
}

int	print_s(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (print_s("(null)"));
	while (str[i] != '\0')
	{
		print_c(str[i]);
		i++;
	}
	return (i);
}

int	print_p(void *ptr)
{
	int	count;

	if (!ptr)
		return (print_s("(nil)"));
	count = print_s("0x") + print_x((unsigned long)ptr);
	return (count);
}
