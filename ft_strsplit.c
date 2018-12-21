/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:13:09 by dfelissa          #+#    #+#             */
/*   Updated: 2018/12/20 17:57:34 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lettersnumber(char const *str, char c)
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

	i = 0;
	nbrword = 0;
	if (str [i] == '\0')
		return (0);
	if (str[0] != c)
		nbrword++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			nbrword++;
		i++;
	}
	return (nbrword);
}

static char	*ft_cpyline(char const *str, char c)
{
	int			j;
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

char		**ft_strsplit(char const *s, char c)
{
	int		j;
	int		k;
	char	**tab;

	j = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * ft_wordsnumber(s, c) + 1)))
		return (NULL);
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			tab[k] = ft_cpyline(s, c);
			k++;
		}
		while (s[j] && s[j] != c)
			j++;
	}
	tab[k] = NULL;
	return (tab);
}

int main(int ac, char **av)
{
	char	**tab = ft_strsplit("  Salut richard 42 !! ", ' ');
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putendl(tab[i]);
		i++;
	}
	return (0);
}
