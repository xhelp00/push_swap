/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:55:55 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/17 17:08:01 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort(t_stack **a)
{
	t_stack	*b;
	int		i;

	b = NULL;
	if (ft_lstsize(*a) == 2)
		ft_sa(a, 0);
	else
	{
		i = ft_find_index(*a, ft_min(*a));
		b = ft_sort_b(a);
		a = ft_sort_a(a, &b);
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

/* This function sort and push stacks until 3 members in stack A left*/
t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b, 0);
	if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
		ft_move_to_b(a, &b);
	if (!ft_issorted(*a))
		ft_sort_3(a);
	return (b);
}

void	ft_move_to_b(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	while (ft_lstsize(*a) > 3 && !ft_issorted(*a))
	{
		temp = *a;
		i = ft_rotate_type_ab(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*a, *b, temp->nbr))
				i = ft_apply_rarb(a, b, temp->nbr, 'a');
			else if (i == ft_case_rrarrb(*a, *b, temp->nbr))
				i = ft_apply_rrarrb(a, b, temp->nbr, 'a');
			else if (i == ft_case_rarrb(*a, *b, temp->nbr))
				i = ft_apply_rarrb(a, b, temp->nbr, 'a');
			else if (i == ft_case_rrarb(*a, *b, temp->nbr))
				i = ft_apply_rrarb(a, b, temp->nbr, 'a');
			else
				temp = temp->next;
		}
	}
}
/* pushing back the elements from B to A until B is empty*/
t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*temp;

	while (*b)
	{
		temp = *b;
		i = ft_rotate_type_ba(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*a, *b, temp->nbr))
				i = ft_apply_rarb(a, b, temp->nbr, 'b');
			else if (i == ft_case_rarrb_a(*a, *b, temp->nbr))
				i = ft_apply_rarrb(a, b, temp->nbr, 'b');
			else if (i == ft_case_rrarrb_a(*a, *b, temp->nbr))
				i = ft_apply_rrarrb(a, b, temp->nbr, 'b');
			else if (i == ft_case_rrarb_a(*a, *b, temp->nbr))
				i = ft_apply_rrarb(a, b, temp->nbr, 'b');
			else
				temp = temp->next;
		}
	}
	return (a);
}

