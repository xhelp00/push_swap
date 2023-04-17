/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:55:55 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/17 16:51:59 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort(t_stack **a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize(*a) == 2)
		ft_sa(a, 0);
	else
	{
		i = ft_find_index(*a, ft_min(*a));
		stack_b = ft_sort_b(a);
		a = ft_sort_a(a, &stack_b);
		if (i < ft_lstsize(*a) - i)
		{
			while ((*a)->nbr != ft_min(*a))
				ft_ra(a, 0);
		}
		else
		{
			while ((*a)->nbr != ft_min(*a))
				ft_rra(a, 0);
		}			
	}	
}

void	ft_sort_3(t_stack **a)
{
	if (ft_min(*a) == (*a)->nbr)
	{
		ft_rra(a, 0);
		ft_sa(a, 0);
	}
	else if (ft_max(*a) == (*a)->nbr)
	{
		ft_ra(a, 0);
		if (!ft_issorted(*a))
			ft_sa(a, 0);
	}
	else
	{
		if (ft_find_index(*a, ft_max(*a)) == 1)
			ft_rra(a, 0);
		else
			ft_sa(a, 0);
	}
}
