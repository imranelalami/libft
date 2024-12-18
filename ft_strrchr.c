/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:13:45 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/15 17:32:26 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	ch;

	x = ft_strlen(s);
	ch = (char)c;
	if (ch == '\0')
	{
		return ((char *)(s + x));
	}
	while (x >= 0)
	{
		if (s[x] == ch)
		{
			return ((char *)s + x);
		}
		x--;
	}
	return (NULL);
}
