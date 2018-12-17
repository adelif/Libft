#include "libft.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return(char *)(haystack + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	printf("ft_strstr ---> %s\n", ft_strstr("daphenie", "henry est malade"));
	printf("strstr ---> %s\n", strstr("daphenie", "henry est malade"));
	return (0);
}
