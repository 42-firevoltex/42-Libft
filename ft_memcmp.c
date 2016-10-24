#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned const char *s1 = str1;
	unsigned const char *s2 = str2;

	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
