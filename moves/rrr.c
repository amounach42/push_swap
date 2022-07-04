/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:03:59 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 22:03:59 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rrr(t_stack *a, t_stack *b, int flag)
{
	rra(a, 0);
	rrb(b, 0);
	if (flag)
		ft_putstr_fd("rrr\n", 1);
}
