/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:36:16 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 21:36:16 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_stack *a, int flag)
{
	t_node	*node;

	if (stack_is_empty(a) || a->size == 1)
		return ;
	node = new_node(a->top->num);
	push_node_bottom(a, node);
	pop_node_top(a);
	if (flag)
		ft_putstr_fd("ra\n", 1);
}
