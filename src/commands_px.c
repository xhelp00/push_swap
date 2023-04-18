/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_px.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:20:04 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/18 11:19:04 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_px(t_stack **s1, t_stack **s2)
{
	t_stack	*temp;

	if (!s2)
		return ;
	temp = *s1;
	*s1 = *s2;
	*s2 = (*s2)->next;
	(*s1)->next = temp;
}

void	ft_pa(t_stack **a, t_stack **b, int flag)
{
	ft_px(a, b);
	if (flag == 0)
		write(1, "pa\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b, int flag)
{
	ft_px(b, a);
	if (flag == 0)
		write(1, "pb\n", 3);
}
