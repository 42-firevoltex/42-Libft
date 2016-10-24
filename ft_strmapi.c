#include <stdlib.h>
#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	if (s != NULL && f != NULL)
	{
		i = 0;
		s2 = (char *)malloc(sizeof(char *) * ft_strlen(s));
		if (s2 == NULL)
			return (NULL);
		while (s[i])
		{
			s2[i] = f(i, s[i]);
			i++;
		}
		return (s2);
	}
	return (0);
}
