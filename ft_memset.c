#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*srcx;

	srcx = (unsigned char *)src;
	i = 0;
	if (len == 0)
		return (src);
	while (i < len)
	{
		srcx[i] = c;
		i++;
	}
	return (src);
}
