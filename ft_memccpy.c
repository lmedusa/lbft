#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t len)
{
	size_t			i;
	unsigned char	*destf;
	unsigned char	*srcf;

	i = 0;
	destf = (unsigned char *)dest;
	srcf = (unsigned char *)src;
	while (i < len)
	{
		if (srcf[i] != (unsigned char)ch)
			destf[i] = srcf[i];
		if (srcf[i] == (unsigned char)ch)
		{
			destf[i] = srcf[i];
			i++;
			return (dest + i);
		}
		i++;
	}
	return (NULL);
}
