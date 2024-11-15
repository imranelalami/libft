/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:29:50 by iel-alam          #+#    #+#             */
/*   Updated: 2024/11/14 16:22:15 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(const char *str, char c)
{
	int		flag;
	size_t	count;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}

static size_t	get_length_of_current_word(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_memory(char **splitted, size_t i)
{
	while (i--)
		free(splitted[i]);
}

static int	splitingstring(char **splitted, const char *s, char c)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_len = get_length_of_current_word(s, c);
			splitted[i] = (char *)malloc((word_len + 1) * sizeof(char));
			if (!splitted[i])
			{
				free_memory(splitted, i);
				return (0);
			}
			ft_strlcpy(splitted[i], s, word_len + 1);
			s += word_len;
			i++;
		}
		else
			s++;
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	size_t	word_count;
	char	**splitted;

	if (!s)
		return (NULL);
	word_count = wordcount(s, c);
	splitted = malloc((word_count + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	splitted[word_count] = NULL;
	if (!splitingstring(splitted, s, c))
	{
		free(splitted);
		return (NULL);
	}
	return (splitted);
}
