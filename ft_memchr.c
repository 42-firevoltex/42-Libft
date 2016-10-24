#include <string.h>

void		*ft_memchr(const void *str, int c, size_t n)
{
	const char *s = str;

	if(s)
	{
		while (n--)
		{
			if (*s == (char)c)
				return ((char *)s);
			s++;
		}
		if ((char)c == '\0')
			return ((char *)s);
		}
	return (NULL);
}
