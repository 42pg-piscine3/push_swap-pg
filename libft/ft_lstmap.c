/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/11 11:20:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Step 1: guard against a NULL 'f' - there is nothing to map with.

// Step 2: start an empty result list ('newlst' = NULL) and keep a
//         'tail' pointer so each new node can be appended in O(1)
//         instead of re-walking the growing list every time.

// Step 3: for each node of 'lst', apply 'f' to its content and wrap
//         the result in a new node (ft_lstnew).

// Step 4: if that allocation fails, delete the content that could
//         not be stored (via 'del', if given), free every node
//         already built into 'newlst' (ft_lstclear), and return
//         NULL - nothing is left half-built.

// Step 5: otherwise link the new node onto 'newlst' (as the first
//         node, or after 'tail') via ft_lstappend, then move to the
//         next source node.

// Step 6: return the newly built list.

// Links 'node' onto '*newlst', as the first node if it is still
// empty, or right after '*tail' otherwise - then updates '*tail' to
// 'node'. Keeping '*tail' up to date is what lets ft_lstmap append
// in O(1) instead of re-walking the growing list every time.
static void	ft_lstappend(t_list **newlst, t_list **tail, t_list *node)
{
	if (!*newlst)
		*newlst = node;
	else
		(*tail)->next = node;
	*tail = node;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tail;
	t_list	*node;
	void	*content;

	if (!f)
		return (NULL);
	newlst = NULL;
	tail = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			if (del)
				del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstappend(&newlst, &tail, node);
		lst = lst->next;
	}
	return (newlst);
}
