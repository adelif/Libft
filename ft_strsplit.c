#include "libft.h"

int	ft_lettersnumber(char const *str, char c)

{
	static int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_wordsnumber(char const *str, char c)
{
	static int	i;
	static int	nbrword;
	static int	newword;

	i = 0;
	nbrword = 0;
	newword = 0;
	while (str[i])
	{
		if (newword == 1 && str[i] == c)
			newword = 0;
		if (newword == 0 && str[i] != c)
		{
			newword = 1;
			nbrword++;
		}
		i++;
	}
	return (nbrword);
}

static char	*ft_cpyline(char const *str, char c)
{
	int		j;
	static char	*s;

	j = 0;
	if (!str)
		return (NULL);
	if (!(s = (char*)malloc(sizeof(*s) * ft_lettersnumber(str, c) + 1)))
		return (NULL);
	while (str[j] && str[j] != c)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

char	**ft_strsplit(char const *s, char c)
{
	int	j;
	int	k;
	char	**tab;

	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * ft_wordsnumber(s,c) + 1)))
		return (NULL);
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (s[j])
		{
			tab[k] = ft_cpyline(s,c);
			k++;
		}
		while (s[j] != c)
			j++;
	}
	tab[k] = NULL;
	return (tab);
}


