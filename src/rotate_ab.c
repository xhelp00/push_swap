/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:25:13 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/18 09:13:54 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*temp;

	temp = a;
	i = ft_case_rrarrb(a, b, a->nbr);
	while (temp)
	{
		if (i > ft_case_rarb(a, b, temp->nbr))
			i = ft_case_rarb(a, b, temp->nbr);
		if (i > ft_case_rrarrb(a, b, temp->nbr))
			i = ft_case_rrarrb(a, b, temp->nbr);
		if (i > ft_case_rarrb(a, b, temp->nbr))
			i = ft_case_rarrb(a, b, temp->nbr);
		if (i > ft_case_rrarb(a, b, temp->nbr))
			i = ft_case_rrarb(a, b, temp->nbr);
		temp = temp->next;
	}
	return (i);
}

int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_pos_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_pos_b(b, c))
		i = lstsize(b) - ft_pos_b(b, c);
	if ((i < (lstsize(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = lstsize(a) - ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = lstsize(a) - ft_find_index(a, c);
	i = ft_pos_b(b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_pos_b(b, c))
		i = lstsize(b) - ft_pos_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
