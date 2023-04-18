/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <phelebra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:08:46 by phelebra          #+#    #+#             */
/*   Updated: 2023/04/18 11:46:58 by phelebra         ###   ########.fr       */
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
int			lstsize(t_stack *lst);
int			ft_min(t_stack *a);
int			ft_find_index(t_stack *a, int nbr);
int			ft_pos_a(t_stack *stack_a, int new);
int			ft_pos_b(t_stack *stack_b, int new);
/* util_stack_2 */
int			ft_max(t_stack *a);
t_stack		*lstlast(t_stack *lst);
t_stack		*ft_stack_new(int value);
/* sort */
void		ft_sort(t_stack **a);
void		ft_sort_3(t_stack **a);
void		ft_move_to_b(t_stack **a, t_stack **b);
t_stack		*ft_sort_b(t_stack **a);
t_stack		**ft_sort_a(t_stack **a, t_stack **b);
/* rotate_ab */
int			ft_rotate_type_ab(t_stack *a, t_stack *b);
int			ft_case_rarb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb(t_stack *a, t_stack *b, int c);
/* rotate_ba */
int			ft_rotate_type_ba(t_stack *a, t_stack *b);
int			ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
/* execute */
int			ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
/* commands_push */
void		ft_pa(t_stack **a, t_stack **b, int flag);
void		ft_pb(t_stack **a, t_stack **b, int flag);
/* commands_swap */
void		ft_sa(t_stack **a, int flag);
void		ft_sb(t_stack **b, int flag);
void		ft_ss(t_stack **a, t_stack **b, int flag);
/* commands_rotate */
void		ft_ra(t_stack **a, int flag);
void		ft_rb(t_stack **b, int flag);
void		ft_rr(t_stack **a, t_stack **b, int flag);
/* commands_reverse_rotate */
void		ft_rra(t_stack **a, int flag);
void		ft_rrb(t_stack **b, int flag);
void		ft_rrr(t_stack **a, t_stack **b, int flag);
/* BONUS - checker */
void		ft_process(t_stack **a, t_stack **b, char *line);
char		*ft_check_command(t_stack **a, t_stack **b, char *line);
void		ft_check_rr(t_stack **a, t_stack **b, char *line);

#endif