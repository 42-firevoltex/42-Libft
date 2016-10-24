#include "libft.h"

int		ft_atoi(const char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		value = 10 * value + *str - '0';
		str++;
	}
	return (value * sign);
}
