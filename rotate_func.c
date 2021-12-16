/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:08:20 by danimart          #+#    #+#             */
/*   Updated: 2021/12/16 16:39:07 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	write(1, "ra\n", 4);
	if (*a && (*a)->next)
	{
		tmp = ft_lstnew((*a)->next->content);
		tmp->next = (*a)->next->next;
		(*a)->next = NULL;
		ft_lstadd_back(&tmp, *a);
		*a = tmp;
	}
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	write(1, "rb\n", 4);
	if (*b && (*b)->next)
	{
		tmp = ft_lstnew((*b)->next->content);
		tmp->next = (*b)->next->next;
		(*b)->next = NULL;
		ft_lstadd_back(&tmp, *b);
		*b = tmp;
	}
}

void	rotate_ab(t_list *a, t_list *b)
{
	write(1, "rr\n", 4);
	rotate_a(&a);
	rotate_b(&b);
}
