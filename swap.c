/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:42:09 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/27 09:41:56 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap(t_list **list)
{
	t_list	*aux;

	if (!list || (*list)->next == NULL)
		return ;
	aux = *list;
	*list = (*list)->next;
	aux->next = (*list)->next;
	(*list)->next = aux;
}

void	sa(t_list **list)
{
	swap(list);
	write(1, "sa\n", 3);
}

void	sb(t_list **list)
{
	swap(list);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
