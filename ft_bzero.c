#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	size_t				i;
	unsigned char	*src;

	src = (unsigned char *)str;
	i = 0;
	while (i < len)
	{
		src[i] = 0;
		i++;
	}
}
