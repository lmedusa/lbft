/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 21:52:02 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/01 20:23:49 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t len)
{
	size_t			i;
	unsigned char	*destf;
	unsigned char	*srcf;

	i = 0;
	destf = (unsigned char *)dest;
	srcf = (unsigned char *)src;
	while (i < len)
	{
		if (srcf[i] != (unsigned char)ch)
			destf[i] = srcf[i];
		if (srcf[i] == (unsigned char)ch)
		{
			destf[i] = srcf[i];
			i++;
			return (dest + i);
		}
		i++;
	}
	return (NULL);
}
