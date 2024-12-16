/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:08:54 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/16 11:51:19 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != ((char *)set)[j])
		i++;
	s2 = malloc(sizeof(s1) * i + 1);
	i = 0;
	while (s1[i] != ((char *)set)[j])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	if (s2 != NULL)
	{
		return (s2);
	}
	return (NULL);
}

/*#include <stdio.h>
int main (void)
{
	char *s1 = "holazhola";
	char *set = "z";
	printf("%s\n", ft_strtrim(s1, set));
}*/