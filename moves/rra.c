/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:02:44 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 22:02:44 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_stack *a, int flag)
{
	t_node	*node;

	if (stack_is_empty(a) || a->size == 1)
		return ;
	node = new_node(a->bottom->num);
	push_node_top(a, node);
	pop_node_bottom(a);
	if (flag)
		ft_putstr_fd("rra\n", 1);
}
