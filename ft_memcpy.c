#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*k;

	i = 0;
	j = (unsigned char*)dst;
	k = (unsigned char*)src;
	while (i < n)
	{
		j[i] = k[i];
		i++;
	}
	return (dst);
}
