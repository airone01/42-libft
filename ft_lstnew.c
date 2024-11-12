/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:17:42 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 18:26:05 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates (with malloc(3)) and returns a new node. The member variable
 * ’content’ is initialized with the value of the parameter ’content’. The
 * variable ’next’ is initialized to NULL.
 *
 * @param	content	the content to create the node with
 *
 * @returns the new node
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ft_calloc(1, sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
