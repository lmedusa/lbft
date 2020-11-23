/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:55:25 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/02 03:07:58 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destf;
	unsigned char	*srcf;

	if (!dest && !src)
		return (NULL);
	destf = (unsigned char *)dest;
	srcf = (unsigned char *)src;
	while (n)
	{
		*destf = *srcf;
		destf++;
		srcf++;
		n--;
	}
	return (dest);
}
