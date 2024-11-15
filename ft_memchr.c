/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:49:03 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/10 14:38:19 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*ps;

	ch = c;
	ps = (const unsigned char *)s;
	if (n == 0)
	{
		return (NULL);
	}
	while (n--)
	{
		if (*ps == ch)
		{
			return ((void *)ps);
		}
		ps++:
		}
			return (NULL);
	}
