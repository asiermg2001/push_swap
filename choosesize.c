/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choosesize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:51:18 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/04 08:42:57 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	alreadysorted(t_list *list)
{
	while (list->next != NULL)
	{
		if (list->value > list->next->value)
			return (0);
		list = list->next;
	}
	return (1);
}
