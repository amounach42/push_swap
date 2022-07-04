/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:03:32 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 22:03:32 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rrb(t_stack *b, int flag)
{
	t_node	*node;

	if (stack_is_empty(b) || b->size == 1)
		return ;
	node = new_node(b->bottom->num);
	push_node_top(b, node);
	pop_node_bottom(b);
	if (flag)
		ft_putstr_fd("rrb\n", 1);
}
