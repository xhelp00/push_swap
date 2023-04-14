/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:08:46 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/14 22:10:54 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/* util */
void		ft_error(void);
void		ft_freestr(char **s);
void		ft_free(t_stack **lst);
int			ft_extratoi(const char *s);
/* util_stack */
t_stack		*ft_fill(int ac, char **av);
t_stack		*ft_fill2(char **av);
int			ft_duplicity(t_stack *a);
int			ft_issorted(t_stack *stack_a);
void		ft_add_back(t_stack **stack, t_stack *stack_new);

#endif