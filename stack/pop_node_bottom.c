/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_node_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:57:00 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 23:03:28 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    pop_node_bottom(t_stack *stack, t_node *node)
{
    t_node  *tmp;

    if (stack_is_empty(stack))
        return ;
    tmp = stack->bottom;
    stack->bottom = stack->bottom->above;
    if (stack->size == 1)
    {
        stack->top = NULL;
        stack->bottom = NULL;
    }
    else
        stack->top->bellow = NULL;
    stack->size--;
    free(tmp);
}