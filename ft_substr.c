/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 16:00:02 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/06 20:08:30 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	j = 0;
	i = start;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		if (!(res = (char *)malloc(sizeof(char))))
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (len-- && s[i] != '\0')
	{
		res[j] = s[i];
		i++;
		j++;
	}
	return (res);
}
