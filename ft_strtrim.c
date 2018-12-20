/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfelissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:13:37 by dfelissa          #+#    #+#             */
/*   Updated: 2018/12/20 13:39:06 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t min;
	size_t max;
	size_t len;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] && (s[min] == ' ' || s[min] == ',' || s[min] == '\n'\
	|| s[min] == '\t'))
		min++;
	max = (ft_strlen(s)) - 1;
	while (min < max && (s[max] == ' ' || s[max] == ',' || s[max] == '\n'\
	|| s[max] == '\t'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len + 1));
}
