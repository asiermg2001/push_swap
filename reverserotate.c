/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:21:32 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/27 09:41:21 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	reverserotate(t_list **list)
{
	t_list	*aux;
	t_list	*last;
	t_list	*newlast;

	last = ft_lstlast(*list);
	newlast = ft_lstbeforelast(*list);
	aux = *list;
	*list = last;
	(*list)->next = aux;
	newlast->next = NULL;
}

void	rra(t_list **list)
{
	reverserotate(list);
	write(1, "rra\n", 4);
}

void	rrb(t_list **list)
{
	reverserotate(list);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	reverserotate(a);
	reverserotate(b);
	write(1, "rrr\n", 4);
}
