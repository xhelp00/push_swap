/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:43:50 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/14 21:46:32 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(void)
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

int	ft_extratoi(const char *s)
{
	long long int	base;
	int				sign;

	base = 0;
	sign = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s)
	{
		if (!ft_isdigit(*s))
			ft_error();
		base = base * 10 + (*s - '0');
		s++;
	}
	if ((sign * base) > 2147483647 || (sign * base) < -2147483648)
		ft_error();
	return (base * sign);
}
