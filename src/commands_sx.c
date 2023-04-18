/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_sx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:20:15 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/18 11:19:09 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_sx(t_stack **s)
{
	t_stack	*temp;

	if (!*s || !((*s)->next))
		return ;
	temp = *s;
	*s = (*s)->next;
	temp->next = (*s)->next;
	(*s)->next = temp;
}

void	ft_sa(t_stack **a, int flag)
{
	ft_sx(a);
	if (flag == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b, int flag)
{
	ft_sx(b);
	if (flag == 0)
		write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b, int flag)
{
	ft_sx(a);
	ft_sx(b);
	if (flag == 0)
		write(1, "ss\n", 3);
}
