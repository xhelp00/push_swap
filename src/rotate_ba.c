/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:25:08 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/18 09:13:55 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = b;
	i = ft_case_rrarrb_a(a, b, b->nbr);
	while (temp)
	{
		if (i > ft_case_rarb_a(a, b, temp->nbr))
			i = ft_case_rarb_a(a, b, temp->nbr);
		if (i > ft_case_rrarrb_a(a, b, temp->nbr))
			i = ft_case_rrarrb_a(a, b, temp->nbr);
		if (i > ft_case_rarrb_a(a, b, temp->nbr))
			i = ft_case_rarrb_a(a, b, temp->nbr);
		if (i > ft_case_rrarb_a(a, b, temp->nbr))
			i = ft_case_rrarb_a(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_pos_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_pos_a(a, c))
		i = lstsize(a) - ft_pos_a(a, c);
	if ((i < (lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = lstsize(b) - ft_find_index(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = lstsize(b) - ft_find_index(b, c);
	i = ft_pos_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_pos_a(a, c))
		i = lstsize(a) - ft_pos_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}
