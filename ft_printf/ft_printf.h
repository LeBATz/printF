/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:15:06 by rdavid-g          #+#    #+#             */
/*   Updated: 2025/01/29 21:36:36 by rdavid-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(const char *type, ...);
int			print_c(int r);
int			print_s(char *str);
int			print_p(void *ptr);
int			print_di(int n);
int			print_u(unsigned int n);
int			print_x(unsigned long n);
int			print_bigx(unsigned long n);

# define HEXUPPER "0123456789ABCDEF"
# define HEXLOWER "0123456789abcdef"

#endif