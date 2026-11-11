/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdass-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:55:21 by mdass-ka          #+#    #+#             */
/*   Updated: 2026/11/11 14:58:30 by mdass-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_put_unsigned_nbr(unsigned int n);
int		ft_puthex(unsigned int n, int is_upper);
int		ft_putptr(void *ptr);
int		ft_putdouble(double num, int precision);
int		ft_printf(const char *str, ...);

#endif
