/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:24:24 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/29 09:05:19 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	getbiggestindex(t_list *list)
{
	int	index;

	index = list->index;
	while (list)
	{
		if (index < list->index)
			index = list->index;
		list = list->next;
	}
	return (index);
}

void	sorththree(t_list **a)
{
	int	biggestindex;

	if (alreadysorted(*a))
		return ;
	biggestindex = getbiggestindex(*a);
	if ((*a)->index == biggestindex)
		ra(a);
	else if ((*a)->next->index == biggestindex)
		rra(a);
	if ((*a)->index > (*a)->next->index)
		sa(a);
}
