/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:49:10 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/02 08:55:07 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	getpos(t_list **list)
{
	t_list		*aux;
	int			i;

	aux = *list;
	i = 0;
	while (aux)
	{
		aux->pos = i;
		aux = aux->next;
		i++;
	}
}

int	gettarget(t_list **a, int indexb, int i, int j)
{
	t_list	*aux;

	aux = *a;
	while (aux)
	{
		if (aux->index > indexb && aux->index < i)
		{
			i = aux->index;
			j = aux->pos;
		}
		aux = aux->next;
	}
	if (i != 2147483647)
		return (j);
	aux = *a;
	while (aux)
	{
		if (aux->index < i)
		{
			i = aux->index;
			j = aux->pos;
		}
		aux = aux->next;
	}
	return (j);
}

int	getlowestpos(t_list **list)
{
	t_list	*aux;
	int		i;
	int		j;

	aux = *list;
	i = 2147483647;
	getpos(list);
	j = aux->pos;
	while (aux)
	{
		if (aux->index < i)
		{
			i = aux->index;
			j = aux->pos;
		}
		aux = aux->next;
	}
	return (j);
}

void	gettargetpos(t_list **a, t_list **b)
{
	t_list	*aux;
	int		target;

	aux = *b;
	getpos(a);
	getpos(b);
	target = 0;
	while (aux)
	{
		target = gettarget(a, aux->index, 2147483647, target);
		aux->target = target;
		aux = aux->next;
	}
}
