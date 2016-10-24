#include <string.h>

int			ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while(s1[i] == s2[i] && s1[i] && s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
