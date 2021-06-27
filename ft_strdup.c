#include "libft.h"

char			*ft_strdup(const char *str)
{
	char	    *res;
	size_t      i;
	size_t		max;

	max = ft_strlen(str);
	i = 0;
	res = (char *)malloc(sizeof(char) * max + 1);
	if (!res)
		return (NULL);
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
