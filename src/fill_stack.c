/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:54:01 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/17 16:52:02 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}

t_stack	*ft_fill(int ac, char **av)
{
	t_stack	*a;
	int		i;
	int		j;

	if (ac < 2)
		ft_error();
	a = NULL;
	if (ac == 2)
		a = ft_fill2(av);
	else
	{
		i = 1;
		while (i < ac)
		{
			j = ft_extratoi(av[i]);
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}

t_stack	*ft_fill2(char **av)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	tmp = ft_split(av[1], ' ');
	i = 0;
	a = NULL;
	while (tmp[i])
	{
		j = ft_extratoi(tmp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

int	ft_duplicity(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	ft_issorted(t_stack *a)
{
	int	i;

	i = a->nbr;
	while (a)
	{
		if (i > a->nbr)
			return (0);
		i = a->nbr;
		a = a->next;
	}
	return (1);
}
