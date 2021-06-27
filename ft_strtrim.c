#include "libft.h"

static int		ft_isset(char const c, char const *set)
{
	size_t		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

static char		*ft_diff(char *str)
{
	if (!(str = malloc(sizeof(char) * 1)))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*res;

	i = 0;
	res = NULL;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_isset(s1[i], set) == 0)
		i++;
	j = ft_strlen(s1) - 1;
	while (j && ft_isset(s1[j], set) == 0)
		j--;
	if (i == ft_strlen(s1))
		return (ft_diff(res));
	res = ft_substr((char *)&s1[i], 0, j - i + 1);
	return (res);
}
