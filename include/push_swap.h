/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:08:46 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/17 16:52:01 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_stack
{
	long			nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/* util */
void		ft_error(void);
void		ft_freestr(char **s);
void		ft_free(t_stack **lst);
int			ft_extratoi(const char *s);
/* fill_stack */
t_stack		*ft_fill(int ac, char **av);
t_stack		*ft_fill2(char **av);
int			ft_duplicity(t_stack *a);
int			ft_issorted(t_stack *a);
void		ft_add_back(t_stack **stack, t_stack *stack_new);
/* util_stack */
int			ft_lstsize(t_stack *lst);
int			ft_min(t_stack *a);
int			ft_find_index(t_stack *a, int nbr);
int			ft_pos_a(t_stack *stack_a, int new);
int			ft_pos_b(t_stack *stack_b, int new);
/* util_stack_2 */
int			ft_max(t_stack *a);
t_stack		*ft_lstlast(t_stack *lst);

/* sort */
void		ft_sort(t_stack **a);
void		ft_sort_3(t_stack **a);


#endif