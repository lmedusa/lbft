/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:52:06 by lmedusa           #+#    #+#             */
/*   Updated: 2020/05/25 18:26:47 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*str_f;

	str_f = (char *)str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (&str_f[i]);
		else
			i++;
	}
	if (ch == '\0')
		return (&str_f[i]);
	return (NULL);
}
