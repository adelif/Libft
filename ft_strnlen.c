/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 15:49:38 by dfelissa          #+#    #+#             */
/*   Updated: 2019/03/05 15:49:43 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(char *str, int c)
{
	size_t i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}