/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:14:57 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/04 21:42:37 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t buffersize)
{
	size_t	si;
	size_t	ds;

	si = 0;
	ds = 0;
	if (buffersize == 0 && src != NULL)
	{
		return (0);
	}
	while (dst[ds])
	{
		ds++;
	}
	while (src[si] != '\0' && ds < (buffersize - 1))
	{
		dst[ds] = src[si];
		si++;
		ds++;
	}
	dst[ds] = '\0';
}
