/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:51:27 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/16 12:33:07 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	*s2;
	char	*s3;

	j = 0;
	i = 0;
	k = 0;
	count = 0;
	while (s[i])
		i++;
	s2 = malloc (sizeof(char) * i);
	s3 = malloc (sizeof(char) * i);
	i = 0;
	while (s[i] != '\0')
	{
		s2[j] = s[i];
		if (s[i] == c)
		{
			count++;
			s3[k] = *s2;
			j = 0;
			k++;
		}
		i++;
		j++;
	}
	
	return (s3);
}
#include <stdio.h>
int main (void)
{
	char *s = "holazholazholaz";
	char c = 'z';
	printf("%s\n", ft_split(s, c));
	return (0);
}