/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:20:02 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 22:22:14 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
    int     num;
    struct  s_stack *above;
    struct  s_stack *bellow;
}   t_node;

typedef struct s_stack
{
    t_node  *top;
    t_node  *bottom;
    int     size;
}   t_stack;

#endif