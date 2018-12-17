#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] != c)
		return (NULL);
	return (NULL);
}

int	main(int ac, char **av)
{
	printf("%s\n", ft_strrchr(av[1], 104));
	printf("%s", strrchr(av[1], 104));
	return (0);
}
