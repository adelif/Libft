#include <stdio.h>
#include <stdlib.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	printf("%d", ft_strnequ(av[1], av[2], atoi(av[3])));
	return (0);
}
