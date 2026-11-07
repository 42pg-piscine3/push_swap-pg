/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/11 12:49:43 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: guard against a NULL 'lst' or 'new' - nothing to link.

// Step 2: point the new node's 'next' at whatever the list
//         currently starts with (NULL if the list was empty).

// Step 3: make 'new' the new head of the list by rewriting *lst.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
