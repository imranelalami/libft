/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:56:09 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/15 15:57:11 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	if (!src)
		return (0);
	if (!dst && dsize == 0)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < dsize && dst[dst_len])
		dst_len++;
	if (dst_len >= dsize)
		return (dsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i + 1) < dsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
