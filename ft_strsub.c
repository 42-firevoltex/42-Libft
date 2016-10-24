#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	if (s == NULL)
		return (0);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		ret[i] = s[start + i];
		i++;
		len--;
	}
	ret[i] = '\0';
	return (ret);
}
