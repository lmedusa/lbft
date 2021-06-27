#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	sz;
	size_t	i;

	i = 0;
	if (!dst)
		return (0);
	sz = ft_strlen(src);
	if (!size)
		return (sz);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sz);
}
