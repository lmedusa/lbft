/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:12:07 by lmedusa           #+#    #+#             */
/*   Updated: 2020/05/25 18:25:38 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*srcx;

	srcx = (unsigned char *)src;
	i = 0;
	if (len == 0)
	{
		return (src);
	}
	while (i < len)
	{
		srcx[i] = c;
		i++;
	}
	return (src);
}
