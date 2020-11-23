/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 20:14:09 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/04 22:49:01 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*srcf;
	unsigned char	cf;

	srcf = (unsigned char *)src;
	cf = (unsigned char)c;
	while (n)
	{
		if (*srcf == cf)
			return (srcf);
		srcf++;
		n--;
	}
	return (NULL);
}
