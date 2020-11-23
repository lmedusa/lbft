/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 17:40:22 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/01 14:22:15 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_null(void *src, int c, size_t len)
{
	int				i;
	int				max;
	unsigned char	*src_f;

	max = (int)len;
	src_f = (unsigned char *)src;
	i = 0;
	if (max == 0)
	{
		return (src);
	}
	while (i <= max - 1)
	{
		src_f[i] = c;
		i++;
	}
	return (src);
}

void			*ft_calloc(size_t num, size_t size)
{
	void *mem;

	if (!(mem = malloc(num * size)))
		return (NULL);
	ft_null(mem, 0, (num * size));
	return (mem);
}
