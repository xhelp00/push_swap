/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:43:50 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/14 15:57:52 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    ft_error(void)
{
    ft_printf("Error\n");
    exit(1);
}

void	ft_freestr(char **s)
{
	char	*c;

	if (!s)
		return ;
	while (*s)
	{
		c = *s;
		s++;
		free(c);
	}
	*s = NULL;
}

void	ft_free(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->nbr = 0;
		free(*lst);
		*lst = tmp;
	}
}
