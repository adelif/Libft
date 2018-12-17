#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (s)
	{
		len = ft_strlen(s);
		if (!(str = (char *)malloc((len + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

