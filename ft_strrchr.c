/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:13:45 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/03 20:04:18 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	if (s == NULL)
	{
		return (NULL);
	}
	x = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)(s + x));
	}
	while (x > 0)
	{
		x--;
		if (s[x] == c)
		{
			return ((char *)s + x);
		}
	}
	if (*s == '\0')
	{
		return (0);
	}
	return (NULL);
}
