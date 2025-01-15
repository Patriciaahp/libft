/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:51:27 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/09 12:43:51 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(const char *s, char c, int *i)
{
	int	len;

	len = 0;
	while (s[*i] && s[*i] != c)
	{
		len++;
		(*i)++;
	}
	return (len);
}

static int	find_words(char const *s, char c, int *i, char **s3)
{
	int	k;
	int	l;

	k = 0;
	while (s[*i])
	{
		if (s[*i] == c)
			(*i)++;
		else
		{
			l = word_len(s, c, i);
			s3[k] = (char *)malloc(sizeof(char) * (l + 1));
			if (!s3[k])
				return (k);
			ft_strlcpy(s3[k], &s[*i - l], l + 1);
			k++;
		}
	}
	return (k);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		count;
	char	**s3;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}

	s3 = (char **)malloc(sizeof(char *) * (count + 1));
	if (!s3)
		return (NULL);

	i = 0;
	k = find_words(s, c, &i, s3);
	s3[k] = NULL;
	return (s3);
}
