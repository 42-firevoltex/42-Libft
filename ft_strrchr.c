#include <string.h>
#include "libft.h"

char		*ft_strrchr(char const *s, int c)
{
	unsigned int		i;

	if (s)
	{
		i = ft_strlen(s);
		while (i >= 0)
		{
			if (s[i] == (char)c)
				return ((char *)s + i);
			i--;
		}
	}
	return (NULL);
}
