/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_PP2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:22:21 by rdavid-g          #+#    #+#             */
/*   Updated: 2025/01/29 21:36:29 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_di(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (print_s("-2147483648"));
	if (n < 0)
	{
		print_c('-');
		count++;
		n = -n;
	}
	if (n >= 10)
		count += print_di(n / 10);
	print_c(n % 10 + '0');
	return (count + 1);
}

int	print_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_u(n / 10);
	print_c(n % 10 + '0');
	return (count + 1);
}

int	print_x(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_x(n / 16);
	return (count + print_c(HEXLOWER[n % 16]));
}

int	print_bigx(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_bigx(n / 16);
	return (count + print_c(HEXUPPER[n % 16]));
}
