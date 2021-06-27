#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	n;
	char	*big_f;

	big_f = (char *)big;
	n = 0;
	if (*small == '\0')
		return (big_f);
	i = ft_strlen(small);
	while (big[n] && n + i <= len)
	{
		if (ft_strncmp(&big[n], small, i) == 0)
			return (&big_f[n]);
		n++;
	}
	return (NULL);
}
