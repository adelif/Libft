/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:12:49 by dfelissa          #+#    #+#             */
/*   Updated: 2018/12/20 13:12:51 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && j < ft_strlen(little))
			{
				if (i + j >= len)
					return (NULL);
				if (j == ft_strlen(little) - 1)
					return ((char *)big + i);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
