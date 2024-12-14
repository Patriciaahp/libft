/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:17:34 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:52:26 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while ((s[i] != '\0'))
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ("null");
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char *a = "holaghjofgjho";
	char *b = "holaghjofgjho";
	int c = 'o';

	  printf("%s\n", ft_strchr(a, c));
	  printf("%s\n", strchr(b, c));
}
*/
