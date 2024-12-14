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

/*#include "libft.h"*/
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while ((s[i] != '\0'))
	{
		i++;
	}
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return ("null");
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