/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshtan <joshtan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:20:00 by joshtan           #+#    #+#             */
/*   Updated: 2026/09/11 11:20:00 by joshtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Step 1: guard against a NULL 'lst' or 'del'.

// Step 2: free the node's content using the caller-supplied 'del'
//         function.

// Step 3: free the node itself - but NOT lst->next, the rest of the
//         list is left untouched.

// Step 4: no return value (void).

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
