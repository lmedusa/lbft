/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 20:36:13 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/06 21:00:01 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	n;
	char	*big_f;

	big_f = (char *)big;
	i = 0;
	n = 0;
	if (*small == '\0')
		return ((char *)big);
	i = ft_strlen(small);
	while (big[n] && n + i <= len)
	{
		if (ft_strncmp(&big[n], small, i) == 0)
			return (&big_f[n]);
		n++;
	}
	return (NULL);
}
