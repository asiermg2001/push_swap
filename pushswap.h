/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:37:39 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/04 09:15:33 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include<unistd.h>
# include<stdio.h>
# include<stddef.h>
# include<stdlib.h>
# include<limits.h>

typedef struct s_list
{
	int				costa;
	int				costb;
	int				target;
	int				pos;
	int				value;
	int				index;
	struct s_list	*next;
}t_list;

void		sa(t_list **list);

void		sb(t_list **list);

void		ss(t_list **a, t_list **b);

void		pb(t_list **a, t_list **b);

void		pa(t_list **a, t_list **b);

t_list		*ft_lstlast(t_list	*lst);

void		ra(t_list **list);

void		rb(t_list **list);

void		rr(t_list **a, t_list **b);

t_list		*ft_lstbeforelast(t_list *list);

void		rra(t_list **list);

void		rrb(t_list **list);

void		rrr(t_list **a, t_list **b);

char		**ft_split(char const *s, char c);

long		checkargv(char *str);

int			ft_atoi(const char *str);

void		freestack(t_list **list);

void		exitfreestacks(t_list **a, t_list **b);

void		ft_lstadd_back(t_list **lst, t_list *new);

t_list		*ft_lstnew(int value);

size_t		ft_strlen(const char *str);

int			checkduplicate(t_list *a);

int			getlistsize(t_list *a);

void		getindex(t_list *a, int stacksize);

int			alreadysorted(t_list *list);

void		sorththree(t_list **a);

void		bigsort(t_list **a, t_list **b);

void		gettargetpos(t_list **a, t_list **b);

void		cost(t_list **a, t_list **b);

int			abs(int i);

void		move(t_list **a, t_list **b, int costa, int costb);

void		calculatecheapest(t_list **a, t_list **b);

int			getlowestpos(t_list **list);

#endif