/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:54:20 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/16 11:41:56 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
strlcpy 
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	s3 = malloc(sizeof(char) * (i + j + 1));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		s3[k] = s2[j];
		j++;
		k++;
	}
	s3[k] = '\0';
	if (s3 != NULL)
		return (s3);
	return (NULL);
}
#include <stdio.h>
int main (void)
{
	char *s1 = "hola";
	char *s2 = "gato";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
