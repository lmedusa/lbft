/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 23:29:34 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/06 23:32:09 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *n;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		n = *lst;
		*lst = n->next;
		free(n);
	}
	*lst = NULL;
}
