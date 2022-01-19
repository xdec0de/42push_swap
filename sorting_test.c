/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:29:49 by danimart          #+#    #+#             */
/*   Updated: 2022/01/19 17:36:32 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_sort(t_list **a, t_list **b, int size)
{
	if (size == 3)
		sort_three(a, b);
}

void	sort_three(t_list **a, t_list **b)
{
	int	f;
	int	s;
	int	t;

	f = (*a)->content;
	s = (*a)->next->content;
	t = (*a)->next->next->content;
	if(*b)
		printf("");
	if(f > s && s < t && f < t)
		swap_a(a, 1);
	else if(f > s && s > t)
	{
		swap_a(a, 1);
		rev_rotate_a(a, 1);
	}
}
