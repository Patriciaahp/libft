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

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		k;
	int		length;

	if (!s1 || !set)
		return (NULL);

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	while (s1[length])
		length++;
	length--;
	s2 = malloc(sizeof(char) * (length + 1));
	if (!s1||!set)
		return (NULL);
	k = length;
	while (k >= 0)
	{
		if (s1[k] == set[j])
			i++;
		j++;
		k--;
	}
	j = 0;
	k=0;
	while (k < length - i)
	{
		if (s1[k] == set[j])
			k++;
		else
		{
			s2[j] = s1[k];
			j++;
		}
		k++;
	}

	s2[j] = '\0';

	return (s2);
}
#include <stdio.h>

int		main(int argc, const char *argv[])
{
	char	*strtrim;
	int		arg;


	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		if (!(strtrim = ft_strtrim(s1, " ")))
			printf("%s\n","NULL");
		else
			printf("%s\n",strtrim);
		if (strtrim == s1)
			printf("%s\n","\nA new string was not returned");
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			printf("%s\n","NULL");
		else
			printf("%s\n",strtrim);
		if (strtrim == s1)
			printf("%s\n","\nA new string was not returned");
	}
	else if (arg == 3)
	{
		char s1[] = " lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "l ")))
			printf("%s\n","NULL");
		else
			printf("%s\n",strtrim);
		if (strtrim == s1)
			printf("%s\n","\nA new string was not returned");
	}
	else if (arg == 4)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "tel")))
			printf("%s\n","NULL");
		else
			printf("%s\n",strtrim);
		if (strtrim == s1)
			printf("%s\n","\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		if (!(strtrim = ft_strtrim(s1, " ")))
			printf("%s\n","NULL");
		else
			printf("%s\n",strtrim);
		if (strtrim == s1)
			printf("%s\n","\nA new string was not returned");
	}
	return (0);
}
