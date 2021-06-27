#include "libft.h"

void			*ft_calloc(size_t num, size_t size)
{
	void *mem;

	if (!(mem = malloc(num * size)))
		return (NULL);
	ft_bzero(&mem, num * size);
	return (mem);
}
