/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/11 11:20:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: guard against a NULL 'lst' or 'new'.

// Step 2: edge case - if the list is currently empty (*lst is
//         NULL), 'new' becomes the whole list.

// Step 3: otherwise find the current last node with ft_lstlast.

// Step 4: attach 'new' right after that last node.

// Step 5: no return value (void).

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
