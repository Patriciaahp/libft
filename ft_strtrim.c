/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:08:54 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/15 12:17:26 by pahernan         ###   ########.fr       */
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
	int		z;

	if (!s1 || !set)
		return (NULL);

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	z = 1;
	length = 0;
	while (s1[length])
		length++;
	s2 = malloc(sizeof(char) * (length + 1));
	if (!s2)
		return (NULL);
	k = length;
	while (k >= 0)
	{
		while (set[j] == ' ')
			j++;
		while ((s1[k] == set[j] || s1[k] == ' ' ) && k == length - z)
		{
			i++;
			z++;
		}
		k--;
	}
	k=0;
	z = 0;
	while (k < length - i)
	{
		while (set[j] == ' ')
			j++;
		while (((s1[k] == set[j] || s1[k] == ' ' ) && z == 0) && k <= length - i)
				k++;
			s2[l] = s1[k];
				l++;
				k++;
				z++;
	}

	s2[l] = '\0';

	return (s2);
}

#include <stdio.h>
int main(void)
{
		//char * s = ft_strtrim("   xxxtripouille", " x");
		printf("%s",ft_strtrim("tripouille   xxx", " x"));
	return (0);
}

/*int main(void)
{


	char * s = ft_strtrim("   xxxtripouille", " x");
	 check(!strcmp(s, "tripouille"));
	mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();

	s = ft_strtrim("tripouille   xxx", " x");
	 check(!strcmp(s, "tripouille"));
	 mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();

	s = ft_strtrim("   xxxtripouille   xxx", " x");
	 check(!strcmp(s, "tripouille"));
	 mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();
	
	s = ft_strtrim("   xxx   xxx", " x");
	 check(!strcmp(s, ""));
	 mcheck(s, 1); free(s); showLeaks();

	s = ft_strtrim("", "123");
	 check(!strcmp(s, ""));
	 mcheck(s, 1); free(s); showLeaks();

	s = ft_strtrim("123", "");
	 check(!strcmp(s, "123"));
	 mcheck(s, 4); free(s); showLeaks();

	s = ft_strtrim("", "");
	 check(!strcmp(s, ""));
	 mcheck(s, 1); free(s); showLeaks();
	
	s = ft_strtrim("abcdba", "acb");
	 check(!strcmp(s, "d"));
 	mcheck(s, 2); free(s); showLeaks();
	
	write(1, "\n", 1);
	return (0);
}*/