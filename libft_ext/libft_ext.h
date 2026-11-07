/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ext.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42penang.edu.m    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:00:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/11/06 15:00:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EXT_H
# define LIBFT_EXT_H
# include <stdlib.h>

// Extra general-purpose functions that are not part of the libft subject.

// Compares the whole strings s1 and s2. Returns 0 if they are identical,
// otherwise the difference between the first differing unsigned chars.
int		ft_strcmp(const char *s1, const char *s2);

// Turns every whitespace character (\t \n \v \f \r) in str into a space.
void	ft_ws_to_space(char *str);

// Frees a NULL-terminated array of strings, such as ft_split's result.
void	ft_free_split(char **tab);

#endif
