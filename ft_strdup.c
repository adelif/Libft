#include "libft.h"

char *ft_strdup(const char *s)
{
	int	i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*str) * i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
