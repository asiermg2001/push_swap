/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:01:11 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/04 08:55:00 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	cost(t_list **a, t_list **b)
{
	t_list	*auxa;
	t_list	*auxb;
	int		sizea;
	int		sizeb;

	auxa = *a;
	auxb = *b;
	sizea = getlistsize(*a);
	sizeb = getlistsize(*b);
	while (auxb)
	{
		auxb->costb = auxb->pos;
		if (auxb->pos > sizeb / 2)
			auxb->costb = (sizeb - auxb->pos) * -1;
		auxb->costa = auxb->target;
		if (auxb->target > sizea / 2)
			auxb->costa = (sizea - auxb->target) * -1;
		auxb = auxb->next;
	}
}

void	calculatecheapest(t_list **a, t_list **b)
{
	t_list	*aux;
	int		cheapest;
	int		costa;
	int		costb;

	aux = *b;
	cheapest = 2147483647;
	while (aux)
	{
		if (abs(aux->costa) + abs(aux->costb) < cheapest)
		{
			cheapest = abs(aux->costa) + abs(aux->costb);
			costa = aux->costa;
			costb = aux->costb;
		}
		aux = aux->next;
	}
	move(a, b, costa, costb);
}
