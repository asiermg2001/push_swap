/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:56:36 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/04 09:15:48 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long	checkargv(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				i;
	int				ncount;

	ncount = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || \
			str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			ncount = -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return ((int)(ncount * result));
}

void	freestack(t_list **list)
{
	t_list	*aux;

	if (!list || !*list)
		return ;
	while (*list)
	{
		aux = (*list)->next;
		free(*list);
		*list = aux;
	}
	*list = NULL;
}

void	exitfreestacks(t_list **a, t_list **b)
{
	if (a == NULL || *a != NULL)
		freestack(a);
	if (b == NULL || *b != NULL)
		freestack(b);
	write(1, "Error\n", 6);
	exit(1);
}
