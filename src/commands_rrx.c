/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_rrx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:20:09 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/18 11:19:06 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_rrx(t_stack **s)
{
	t_stack	*temp;
	int		i;

	if (!*s || !(*s)->next)
		return ;
	i = 0;
	temp = *s;
	while ((*s)->next)
	{
		*s = (*s)->next;
		i++;
	}
	(*s)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
}

void	ft_rra(t_stack **a, int flag)
{
	ft_rrx(a);
	if (flag == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b, int flag)
{
	ft_rrx(b);
	if (flag == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int flag)
{
	ft_rrx(a);
	ft_rrx(b);
	if (flag == 0)
		write(1, "rrr\n", 4);
}
