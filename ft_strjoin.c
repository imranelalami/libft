/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:49:46 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/10 09:49:50 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*newstring;
	size_t	totallen;
	size_t	s2len;
	size_t	s1len;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	totallen = (s1len + s2len);
	newstring = malloc(sizeof(char) * (totallen + 1));
	if (!newstring)
		return (NULL);
	while (s1len--)
		*newstring++ = *s1++;
	while (s2len--)
		*newstring++ = *s2++;
	*newstring = '\0';
	return (newstring - totallen);
}
