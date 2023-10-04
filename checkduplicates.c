/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkduplicates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:17:12 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/26 08:35:35 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	checkduplicate(t_list *a)
{
	t_list	*aux;
	t_list	*dupe;

	aux = a;
	while (aux)
	{
		dupe = aux->next;
		while (dupe)
		{
			if (aux->value == dupe->value)
				return (1);
			dupe = dupe->next;
		}
		aux = aux->next;
	}
	return (0);
}

int	getlistsize(t_list *a)
{
	int	i;

	i = 0;
	if (!a)
		return (0);
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}
