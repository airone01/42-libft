/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:05:43 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 19:08:59 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Takes as a parameter a node and frees the memory of the node’s content using
 * the function ’del’ given as a parameter and free the node. The memory of
 * ’next’ must not be freed.
 *
 * @param	lst	node to free
 * @param	del	the address of the function used to delete the content
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	if (lst->content)
		del(lst->content);
	free(lst);
}
