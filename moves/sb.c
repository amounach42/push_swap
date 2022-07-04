/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:26:49 by amounach          #+#    #+#             */
/*   Updated: 2022/07/04 21:31:33 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    sb(t_stack *b, int flag)
{
    int tmp;

    if (stack_is_empty(b) || b->size == 1)
        return ;
    tmp = b->top->num;
    b->top->num = b->top->bellow->num;
    b->top->bellow->num = tmp;
    if (flag)
		ft_putstr_fd("sb\n", 1);
}