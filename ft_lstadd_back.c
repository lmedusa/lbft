/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 23:21:55 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/06 23:25:52 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *n;

	if (lst == NULL)
		return ;
	n = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (n->next)
			n = n->next;
		n->next = new;
	}
}
