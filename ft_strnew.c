#include "libft.h"

char		*ft_strnew(size_t size)
{
	return (ft_memalloc(sizeof(char) * (size + 1)));
}
