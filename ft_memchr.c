#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*srcf;
	unsigned char	cf;

	srcf = (unsigned char *)src;
	cf = (unsigned char)c;
	while (n)
	{
		if (*srcf == cf)
			return (srcf);
		srcf++;
		n--;
	}
	return (NULL);
}
