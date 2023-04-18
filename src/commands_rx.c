/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_rx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:20:12 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/18 08:56:09 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_rx(t_stack **s)
{
	t_stack	*temp;

	if (!*s || !(*s)->next)
		return ;
	temp = *s;
	*s = lstlast_node(*s);
	(*s)->next = temp;
	*s = temp->next;
	temp->next = NULL;
}

void	ft_ra(t_stack **a, int flag)
{
	ft_rx(a);
	if (flag == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b, int flag)
{
	ft_rx(b);
	if (flag == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int flag)
{
	ft_rx(a);
	ft_rx(b);
	if (flag == 0)
		write(1, "rr\n", 3);
}
