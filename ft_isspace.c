#include "libft.h"

int		ft_isspace(char c)
{
	return (c == '\r' || c == '\v' || c == '\f' || ft_isblank(c));
}
