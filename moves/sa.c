/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:21:01 by amounach          #+#    #+#             */
/*   Updated: 2022/07/04 21:26:38 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    sa(t_stack *a, int flag)
{
    int tmp;

    if (stack_is_empty(a) || a->size == 1)
        return ;
    tmp = a->top->num;
    a->top->num = a->top->bellow->num;
    a->top->bellow->num = tmp;
    if (flag)
        ft_putstr_fd("sa\n", 1);
}