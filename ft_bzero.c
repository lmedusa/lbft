/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:50:50 by lmedusa           #+#    #+#             */
/*   Updated: 2020/05/25 18:51:58 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	int				i;
	int				max;
	unsigned char	*src;

	max = (int)len;
	src = (unsigned char *)str;
	i = 0;
	while (i <= max - 1)
	{
		src[i] = '\0';
		i++;
	}
}
