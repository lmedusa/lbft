/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 13:00:38 by lmedusa           #+#    #+#             */
/*   Updated: 2020/06/01 23:06:45 by lmedusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sizes(int num)
{
	int		i;

	i = 0;
	if (num <= 0)
		i++;
	while (num)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

static char		*ft_intstr(int nb, char *res, int size)
{
	if (nb == 0)
	{
		res[0] = '0';
		res[size] = '\0';
		return (res);
	}
	else if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	res[size] = '\0';
	while (nb)
	{
		res[--size] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}

char			*ft_itoa(int n)
{
	char	*res;
	int		sizes;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sizes = ft_sizes(n);
	if (!(res = (char *)malloc(sizeof(char) * sizes + 1)))
		return (NULL);
	res = ft_intstr(n, res, sizes);
	return (res);
}
