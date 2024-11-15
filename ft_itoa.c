/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:01:56 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/13 14:25:00 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long long n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
	{
		counter++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int			len;
	long long	j;
	char		*str;

	j = n;
	len = count_len(j);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (j < 0)
	{
		str[0] = '-';
		j = -j;
	}
	else if (j == 0)
		str[0] = '0';
	while (j > 0)
	{
		str[--len] = (j % 10) + '0';
		j /= 10;
	}
	return (str);
}
