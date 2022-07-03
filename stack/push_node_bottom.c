/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node_bottom.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:14:27 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 22:26:31 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    push_node_bottom(t_stack *stack, t_node *node)
{
    if (!stack_is_empty(stack))
    {
        node->above = stack->bottom;
        stack->bottom->bellow = node;
    }
    else
        stack->top = node;
    stack->bottom = node;
    stack->size++;
    
}