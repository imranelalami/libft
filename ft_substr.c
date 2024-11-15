/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:50:23 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/10 14:37:54 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		newstring = malloc(1);
		if (!newstring)
			return (NULL);
		newstring[0] = '\0';
		return (newstring);
	}
	if (len > s_len - start)
		len = s_len - start;
	newstring = malloc(sizeof(char) * (len + 1));
	if (!newstring)
		return (NULL);
	i = 0;
	while (i < len) //check this if its i <= len
		newstring[i++] = s[start + i];
	newstring[i] = '\0';
	return (newstring);
}
