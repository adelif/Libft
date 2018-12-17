#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t i;
	char *str;

	if (!(str = (char *)malloc(size)))
		return (NULL);
	i = 0;
	while (str[i] && i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
