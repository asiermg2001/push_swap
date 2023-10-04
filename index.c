/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:06:57 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/27 08:47:28 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	getindex(t_list *a, int stacksize)
{
	t_list	*aux;
	t_list	*newbiggest;
	int		value;

	while (--stacksize > 0)
	{
		aux = a;
		newbiggest = NULL;
		value = -2147483648;
		while (aux)
		{
			if (aux->value == -2147483648 && aux->index == 0)
				aux->index = 1;
			if (aux->value > value && aux->index == 0)
			{
				value = aux->value;
				newbiggest = aux;
				aux = aux->next;
			}
			else
				aux = aux->next;
		}
		if (newbiggest != NULL)
			newbiggest->index = stacksize;
	}
}
