/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_node_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:47:39 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 22:56:11 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    pop_node_top(t_stack *stack, t_node *node)
{
    t_node *tmp;

    if (stack_is_empty(stack))
        return ;
    tmp = stack->top;
    stack->top = stack->top->bellow;
    if (stack->size == 1)
    {
        stack->top = NULL;
        stack->bottom = NULL;
    }
    else
        stack->top->above = NULL;
    stack->size--;
    free(tmp);
}