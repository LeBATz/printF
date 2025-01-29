/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:14:51 by rdavid-g          #+#    #+#             */
/*   Updated: 2025/01/29 20:41:42 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	this_type(char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += print_c(va_arg(ap, int));
	else if (type == '%')
		count += print_c('%');
	else if (type == 's')
		count += print_s(va_arg(ap, char *));
	else if (type == 'p')
		count += print_p(va_arg(ap, void *));
	else if (type == 'd' || type == 'i')
		count += print_di(va_arg(ap, int));
	else if (type == 'u')
		count += print_u(va_arg(ap, unsigned int));
	else if (type == 'x')
		count += print_x(va_arg(ap, unsigned int));
	else if (type == 'X')
		count += print_X(va_arg(ap, unsigned int));
	else
		count += write(1, &type, 1);
	return (count);
}

static int	type_check(va_list ap, const char *type)
{
	int	count;

	count = 0;
	while (*type)
	{
		if (*type == '%')
		{
			type++;
			if (*type != '\0')
				count += this_type(ap, *type);
		}
		else
			count += print_c(*type);
	}
	return (count);
}

int	ft_printf(const char *type, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (!type)
		return (-1);
	va_start(ap, type);
	count = type_check(ap, *type);
	va_end(ap);
	return (count);
}
