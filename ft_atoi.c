#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int result;
	int neg;

	i = 0;
	result = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (str[i] >= '0')
			result = result * 10 + (str[i] - '0');
		i++;
	}
	if (neg == -1)
		return (-result);
	return (result);
}
