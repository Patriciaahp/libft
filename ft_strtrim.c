/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:08:54 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/15 12:54:37 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		k;
	int		l;
	int		length;

	if (!s1 || !set)
		return (NULL);
	length = 0;
	while (s1[length])
		length++;
	i = 0;
	k = length - 1;
	while (k >= 0)
	{
		j = 0;
		while (set[j] && s1[k] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i++;
		k--;
	}
	k = 0;
	while (k < length - i)
	{
		j = 0;
		while (set[j] && s1[k] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		k++;
	}
	s2 = malloc(sizeof(char) * (length - i - k + 1));
	if (!s2)
		return (NULL);
	l = 0;
	while (k < length - i)
		s2[l++] = s1[k++];
	s2[l] = '\0';
	return (s2);
}
