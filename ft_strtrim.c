#include "libft.h"
#include <string.h>

char		*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	char		*ret;

	start = 0;
	end = ft_strlen(s);
	while (ft_isblank(s[start]))
		start++;
	while (ft_isblank(s[end - 1]))
		end--;
	if (end < start)
		end = start;
	ret = ft_strnew(end - start);
	if (ret == NULL)
		return (NULL);
	return (ft_strncpy(ret, s + start, end - start));
}
