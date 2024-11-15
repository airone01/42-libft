/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:31:06 by elagouch          #+#    #+#             */
/*   Updated: 2024/11/12 18:36:49 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Adds the node ’new’ at the beginning of the list.
 *
 * @param	lst	the address of a pointer to the first link of a list
 * @param	new	the address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	lst[0] = new;
}
