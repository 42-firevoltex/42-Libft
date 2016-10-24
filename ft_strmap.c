#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		s2 = (char *)malloc(sizeof(char *) * ft_strlen(s));
		if (s2 == NULL)
			return (NULL);
		while (s[i])
		{
			s2[i] = f(s[i]);
			i++;
		}
		return (s2);
	}
	return (0);
}
