#include "libft.h"

static void		*ft_cat(void *d, const void *s, size_t n)
{
	unsigned char	*df;
	unsigned char	*sf;
	size_t			i;

	df = (unsigned char *)d;
	sf = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		df[i] = sf[i];
		i++;
	}
	return (d);
}

size_t			ft_strlcat(char *dest, const char *src, size_t dstsz)
{
	size_t ssize;
	size_t dsize;
	size_t len;

	ssize = ft_strlen(src);
	dsize = ft_strlen((const char *)dest);
	if (dstsz == 0)
		return (dstsz + ssize);
	if (dsize > dstsz - 1)
		return (dstsz + ssize);
	if (dsize == dstsz - 1)
		return (dsize + ssize);
	if (ssize > (dstsz - 1 - dsize))
		len = dstsz - 1 - dsize;
	else
		len = ssize;
	ft_cat(dest + dsize, src, len);
	dest[dsize + len] = '\0';
	return (ssize + dsize);
}
