/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 08:51:07 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/29 09:43:33 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!lst ->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

t_list	*ft_lstbeforelast(t_list *list)
{
	if (!list)
		return (NULL);
	while (list)
	{
		if (!list->next->next)
			return (list);
		list = list->next;
	}
	return (list);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst && new)
	{
		if (*lst)
		{
			aux = ft_lstlast(*lst);
			aux -> next = new;
		}
		else
			*lst = new;
	}
}

t_list	*ft_lstnew(int value)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
	{
		return (NULL);
	}
	list->costa = -1;
	list->costb = -1;
	list->target = -1;
	list->value = value;
	list->index = 0;
	list -> next = NULL;
	return (list);
}
