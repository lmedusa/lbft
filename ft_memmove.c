/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:29:59 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/02 03:06:40 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*destf;
	unsigned char	*srcf;

	if (!dest && !src)
		return (NULL);
	destf = (unsigned char *)dest;
	srcf = (unsigned char *)src;
	if (srcf < destf)
	{
		while (len--)
			destf[len] = srcf[len];
		return (dest);
	}
	ft_memcpy(dest, src, len);
	return (dest);
}
