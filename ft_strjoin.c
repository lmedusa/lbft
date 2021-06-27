#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	while (*s1 != '\0')
	{
		res[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		res[i] = *s2;
		s2++;
		i++;
	}
	return (res);
}
