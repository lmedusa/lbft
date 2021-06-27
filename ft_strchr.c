#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t		i;
	char	*str_f;

	str_f = (char *)str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (&str_f[i]);
		else
			i++;
	}
	if (ch == '\0')
		return (&str_f[i]);
	return (NULL);
}
