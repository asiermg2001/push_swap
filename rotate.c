/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:02:12 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/27 09:41:43 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate(t_list **list)
{
	t_list	*aux;
	t_list	*last;

	aux = *list;
	*list = (*list)->next;
	last = ft_lstlast(*list);
	aux->next = NULL;
	last->next = aux;
}

void	ra(t_list **list)
{
	rotate(list);
	write(1, "ra\n", 3);
}

void	rb(t_list **list)
{
	rotate(list);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
