/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:59:24 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 22:22:24 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    push_node_top(t_stack *stack, t_node *node)
{
    if (!stack_is_empty(stack))
    {
        node->bellow = stack->top;
        stack->top->above = node;
    }
    else 
        stack->bottom = node;
    stack->top = node;
    stack->size++;
}