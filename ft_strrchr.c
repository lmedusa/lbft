#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t		i;
	char	*str_f;

	i = ft_strlen(str);
	str_f = (char *)str;
	if (ch == '\0')
		return (&str_f[i]);
	else
		while (i)
		{
			if (str[i] == ch)
				return (&str_f[i]);
			else
				i--;
		}
	return (NULL);
}
