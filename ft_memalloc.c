/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 12:53:43 by dfelissa          #+#    #+#             */
/*   Updated: 2018/12/20 13:01:36 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	i;
	char	*str;

	if (!(str = (char *)malloc(size)))
		return (NULL);
	i = 0;
	while (str[i] && i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
