/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:00:37 by amounach          #+#    #+#             */
/*   Updated: 2022/07/03 20:03:30 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
 
t_node *new_node(int data)
{
	t_node  *node;
	
	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = data;
    node->bellow = NULL;
	node->above = NULL;
    return (node);
}