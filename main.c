/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:47:12 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/04 08:44:52 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	choosesize(t_list **a, t_list **b, int stacksize)
{
	if (stacksize == 2 && !alreadysorted(*a))
		sa(a);
	else if (stacksize == 3)
		sorththree(a);
	else if (stacksize > 3 && !alreadysorted(*a))
		bigsort(a, b);
}

void	argstostack(char *argv, t_list **lista)
{
	char		**array;
	long int	argnum;
	int			i;

	array = ft_split(argv, ' ');
	i = 0;
	while (array[i] != NULL)
	{
		if (checkargv(array[i]))
		{
			argnum = ft_atoi(array[i]);
			if (argnum > 2147483647 || argnum < -2147483648)
				exitfreestacks(lista, NULL);
			ft_lstadd_back(lista, ft_lstnew(argnum));
		}
		else
			exitfreestacks(NULL, NULL);
		free(array[i]);
		i++;
	}
	free(array);
}

int	main(int argc, char **argv)
{
	t_list	*lista;
	t_list	*listb;
	int		i;
	int		listsize;

	i = 1;
	lista = NULL;
	listb = NULL;
	while (i < argc)
	{
		argstostack(argv[i], &lista);
		i++;
	}
	if (checkduplicate(lista))
		exitfreestacks(&lista, NULL);
	listsize = getlistsize(lista);
	getindex(lista, listsize + 1);
	choosesize(&lista, &listb, listsize);
	freestack(&lista);
	freestack (&listb);
	return (0);
}
