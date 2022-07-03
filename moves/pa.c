/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:41:48 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 19:43:26 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    pa(t_stack *a, t_stack *b, int flag)
{
    t_node  *node;

    if (stack_is_empty(b))
        return ;
    node = new_node(b->top->num);
}