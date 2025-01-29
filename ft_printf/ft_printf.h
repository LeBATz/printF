/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:15:06 by rdavid-g          #+#    #+#             */
/*   Updated: 2025/01/29 20:41:39 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int	this_type(char type, va_list ap);
int	print_c(int r);
int	print_s(char *str);
int	print_p(void *ptr);
int	print_di(int n);
int	print_u(unsigned int n);
int	print_x(unsigned int n);
int	print_bigx(unsigned int n);

# define HEXUPPER "012323456789ABCDEF"
# define HEXLOWER "01233456789abcedf"

#endif