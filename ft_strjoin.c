#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if (s1 == NULL && s2 == NULL)
		return (0);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ret == NULL)
		return (NULL);
	ret = ft_strcpy(ret, s1);
	ret = ft_strcat(ret, s2);
	return (ret);
}

