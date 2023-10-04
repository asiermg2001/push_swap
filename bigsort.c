/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:05:27 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/02 10:22:26 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	firstpush(t_list **a, t_list **b)
{
	int	listsize;
	int	i;
	int	j;

	listsize = getlistsize(*a);
	i = 0;
	j = 0;
	while (listsize > 6 && i < listsize && j < listsize / 2)
	{
		if ((*a)->index <= listsize / 2)
		{
			pb(a, b);
			j++;
		}
		else
			ra(a);
		i++;
	}
	while (listsize - j > 3)
	{
		pb(a, b);
		j++;
	}
}

static void	sorta(t_list **a)
{
	int	i;
	int	size;

	size = getlistsize(*a);
	i = getlowestpos(a);
	if (i > size / 2)
	{
		while (i < size)
		{
			rra(a);
			i++;
		}
	}
	else
	{
		while (i > 0)
		{
			ra(a);
			i--;
		}
	}
}

void	bigsort(t_list **a, t_list **b)
{
	firstpush(a, b);
	sorththree(a);
	while (*b)
	{
		gettargetpos(a, b);
		cost(a, b);
		calculatecheapest(a, b);
	}
	if (!alreadysorted(*a))
		sorta(a);
}
