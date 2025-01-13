/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:56:17 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/10 11:08:11 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char *a = "hoelalelxelz";
	char *b = "hoelalelxelz";
	int c = 'e';

	  printf("%s\n", ft_strrchr(a, c));
	  printf("%s\n", strrchr(b, c));
}

*/