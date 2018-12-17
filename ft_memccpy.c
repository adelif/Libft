#include	"libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*j;
	const unsigned char		*k;

	i = 0;
	j = (unsigned char*)dest;
	k = (unsigned char*)src;
	while (i < n)
	{
		j[i] = k[i];
		if (j[i] == (unsigned char)c)
			return (j + i + 1);
		i++;
	}
	return (NULL);
}
