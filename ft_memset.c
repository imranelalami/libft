/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:54:07 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/05 23:15:00 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	cc;

	cc = (unsigned char)c;
	x = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		x[i] = cc;
		i++;
	}
	return (b);
}
