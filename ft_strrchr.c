/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:17:53 by lmedusa           #+#    #+#             */
/*   Updated: 2020/05/25 18:28:37 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*str_f;

	i = 0;
	str_f = (char *)str;
	while (str[i] != '\0')
	{
		i++;
	}
	if (ch == '\0')
		return (&str_f[i]);
	else
		while (i >= 0)
		{
			if (str[i] == ch)
				return (&str_f[i]);
			else
				i--;
		}
	return (NULL);
}
