/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:20:29 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/14 15:58:40 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
    t_stack *a;

    a = ft_fill(ac, av);
    if (!a || ft_duplicity(a))
    {
        ft_free(&a);
        ft_error();
    }
    if (!ft_issorted(a))
        ft_sort(&a);
    ft_free(&a);
    return (0);
}

t_stack *ft_fill(int ac, char **av)
{
    t_stack *a;
    int     i;
    int     j;

    if (ac < 2)
        ft_error();
    a = NULL;
    if (ac == 2)
        a = ft_fill2(av);
    else
    {
        i = 1;
        while (i < ac)
        {
            j = ft_extratoi(av[i]);
            ft_add_back(&a, ft_stack_new(j));
            i++;
        }
    }
    return (a);
}

t_stack *ft_fill2(char **av)
{
    t_stack *a;
    char    **tmp;
    int     i;
    int     j;

    tmp = ft_split(av[1], ' ');
    i = 0;
    a = NULL;
    while (tmp[i])
    {
        j = ft_extratoi(tmp[i]);
        ft_add_back(&a, ft_stack_new(j));
        i++;
    }
    ft_freestr(tmp);
    free(tmp);
    return (a);
}
