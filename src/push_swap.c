/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:20:29 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/14 22:31:13 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;

	a = ft_fill(ac, av);
	if (!a || ft_duplicity(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_issorted(a))
		ft_sort(&a); /* tbd */
	ft_free(&a);
	return (0);
}
