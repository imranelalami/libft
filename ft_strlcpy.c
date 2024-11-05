/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:05:24 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/04 22:00:34 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (src == NULL)
		return (0);
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while (x < dstsize - 1 && src[x])
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (i);
}
