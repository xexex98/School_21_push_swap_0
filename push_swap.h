/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:40:26 by mbarra            #+#    #+#             */
/*   Updated: 2021/12/06 15:05:42 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_ps
{
	int		*stack_a;
	int		*stack_b;
	int		a_len;
	int		b_len;
	int		a_max;
	int		a_min;
	int		b_max;
	int		b_min;
	int		a_min_pos;
	int		a_max_pos;
}				t_ps;

void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_isdigit(int c);
long int	ft_atoi(const char *nptr);

void		ft_push_top_min_5(t_ps *ps);
void		ft_push_top_max_5(t_ps *ps);
void		ft_algoritm_5(t_ps *ps);

void		ft_algoritm_2(t_ps *ps);
void		ft_algoritm_3(t_ps *ps);
void		ft_algoritm_4(t_ps *ps);

void		ft_find_max(t_ps *ps);
void		ft_find_min(t_ps *ps);

int			ft_correct(char *str);
int			ft_sorted(t_ps *ps);
int			ft_dup(int *str, int len);

int			ft_init_struct(t_ps *ps, int argc);
void		ft_algoritm(t_ps *ps);

void		sa(t_ps *ps);
void		sb(t_ps *ps);
void		ss(t_ps *ps);

void		pa(t_ps *ps);
void		pb(t_ps *ps);

void		ra(t_ps *ps);
void		rb(t_ps *ps);
void		rr(t_ps *ps);

void		rra(t_ps *ps);
void		rrb(t_ps *ps);
void		rrr(t_ps *ps);

#endif