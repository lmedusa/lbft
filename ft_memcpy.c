#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destf;
	unsigned char	*srcf;

	if (!dest && !src)
		return (NULL);
	destf = (unsigned char *)dest;
	srcf = (unsigned char *)src;
	while (n)
	{
		*destf = *srcf;
		destf++;
		srcf++;
		n--;
	}
	return (dest);
}
