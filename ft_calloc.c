/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:07:34 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/08 02:26:30 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
	{
		return (NULL);
	}
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, total);
	}
	return (ptr);
}
