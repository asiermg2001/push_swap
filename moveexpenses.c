/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moveexpenses.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:36:40 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/04 09:15:15 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	reverseboth(t_list **a, t_list **b, int *costa, int*costb)
{
	while (*costa < 0 && *costb < 0)
	{
		(*costa)++;
		(*costb)++;
		rrr(a, b);
	}
}

static void	rotateboth(t_list **a, t_list **b, int *costa, int*costb)
{
	while (*costa > 0 && *costb > 0)
	{
		(*costa)--;
		(*costb)--;
		rr(a, b);
	}
}

static void	rotatea(t_list **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ra(a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rra(a);
			(*cost)++;
		}
	}
}

static void	rotateb(t_list **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			rb(b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rrb(b);
			(*cost)++;
		}
	}
}

void	move(t_list **a, t_list **b, int costa, int costb)
{
	if (costa < 0 && costb < 0)
		reverseboth(a, b, &costa, &costb);
	else if (costa > 0 && costb > 0)
		rotateboth(a, b, &costa, &costb);
	rotatea(a, &costa);
	rotateb(b, &costb);
	pa(a, b);
}
