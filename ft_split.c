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

static int	find_char(char const *s, char c, int *i, char **s3)
{
	int	k = 0;
	int	l = 0;
	int word_len;
	int temp;

	while (s[*i] != '\0')
	{
		if (s[*i] == c)
		{
			if (l > 0)
			{
				s3[k][l] = '\0';
				k++;
				l = 0;
			}
		}
		else
		{
			if (l == 0)
			{
				word_len = 0;
				temp = *i;
				while (s[temp] != '\0' && s[temp] != c)
				{
					word_len++;
					temp++;
				}
				s3[k] = (char *)malloc(sizeof(char) * (word_len + 1));
				if (!s3[k])
					return (k);
			}
			s3[k][l] = s[*i];
			l++;
		}
		(*i)++;
	}
	if (l > 0)
	{
		s3[k][l] = '\0';
		k++;
	}
	return (k);
}

char	**ft_split(char const *s, char c)
{
	int		i = 0;
	int		k = 0;
	char	**s3;

	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			k++;
		i++;
	}
	s3 = (char **)malloc(sizeof(char *) * (k + 1));
	if (!s3)
		return (NULL);
	i = 0;
	k = find_char(s, c, &i, s3);
	s3[k] = NULL;
	return (s3);
}
