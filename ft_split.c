/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:51:27 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/17 09:57:40 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		l;
	char	**s3;

	i = 0;
	k = 0;
	l = 0;
	while (s[i])
		i++;
	s3 = (char**)malloc (i * i);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			k++;
		}
		s3[k] = (char**)malloc (i * i);
		s3[k][l] = s[i];
		l++;
		i++;
	}
	free(s3);
	return (s3);
}
#include <stdio.h>
int main (void)
{
	char *s = "holazholazholazhola";
	char c = 'z';
	printf("%s\n", ft_split(s, c));
	return (0);
}