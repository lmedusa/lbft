#include "libft.h"

int		ft_memcmp(const void *src, const void *src2, size_t n)
{
	int				res;
	size_t			i;
	unsigned char	*src_f;
	unsigned char	*src2_f;

	res = 0;
	i = 0;
	src_f = (unsigned char *)src;
	src2_f = (unsigned char *)src2;
	while (i < n)
	{
		if (src_f[i] != src2_f[i])
		{
			res = src_f[i] - src2_f[i];
			return (res);
		}
		i++;
	}
	return (res);
}
