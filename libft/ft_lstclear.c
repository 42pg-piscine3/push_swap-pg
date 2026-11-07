/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/11 11:20:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: guard against a NULL 'lst' or 'del'.

// Step 2: walk the list, saving 'next' before deleting the current
//         node - ft_lstdelone frees the node, so its 'next' member
//         can't be read afterwards.

// Step 3: delete the current node with ft_lstdelone (frees the
//         content via 'del', then the node itself).

// Step 4: advance *lst to the saved 'next' node and repeat.

// Step 5: once every node is gone, *lst naturally ends up NULL, as
//         required.

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
