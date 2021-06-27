#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*destf;
	unsigned char	*srcf;

	if (!dest && !src)
		return (NULL);
	destf = (unsigned char *)dest;
	srcf = (unsigned char *)src;
	if (srcf < destf)
	{
		while (len--)
			destf[len] = srcf[len];
		return (dest);
	}
	ft_memcpy(dest, src, len);
	return (dest);
}
