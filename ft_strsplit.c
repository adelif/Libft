/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:13:09 by dfelissa          #+#    #+#             */
/*   Updated: 2018/12/29 12:35:39 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lettersnumber(char const *str, char c, int i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_wordsnumber(char const *str, char c)
{
	int	i;
	int	nbrword;

	i = 0;
	nbrword = 0;
	if (str[i] == '\0')
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

static char	*ft_cpyline(char const *str, char c, int i)
{
	int		j;
	char	*s;

	j = 0;
	if (!(str))
		return (NULL);
	if (!(s = (char*)malloc(sizeof(s) * ft_lettersnumber(str, c, i) - i \
						+ 1)))
		return (NULL);
	while (str[i] && str[i] != c)
	{
		s[j] = str[i];
		j++;
		i++;
	}
	s[j] = '\0';
	return (s);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * ft_wordsnumber(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			tab[j] = ft_cpyline(s, c, i);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
