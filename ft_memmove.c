/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:06:14 by dfelissa          #+#    #+#             */
/*   Updated: 2018/12/20 13:06:15 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *temp;

	temp = ft_strnew(n);
	if (temp)
	{
		temp = ft_memcpy(temp, src, n);
		dest = ft_memcpy(dest, temp, n);
	}
	free(temp);
	return (dest);
}
