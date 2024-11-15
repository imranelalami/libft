/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:32:03 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/10 19:43:56 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	char	*newstring;
	size_t	i;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	newstring = malloc(sizeof(char) * (slen + 1));
	if (!newstring)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
