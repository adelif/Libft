#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *temp;

	temp = ft_strnew(n);
	if (temp)
	{
		temp = ft_memcpy(temp, src, n);
		dest = ft_memcpy(dest, temp, n);
	}
	free(temp);
	return (dest);
}
