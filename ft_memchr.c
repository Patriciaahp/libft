/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:34:54 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:49:06 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int	i;

	i = 0;
	while ((((char *)s)[i] != '\n') && (n > 0))
	{
		if (((char *)s)[i] == c)
		{
			return (&s[i]);
		}
		i++;
		n--;
	}
	return ("null");
}

/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char str[20] = "algo";
	
	
	printf("%s\n", memchr(str, 'l', 3) );
	printf("%s\n", ft_memchr(str, 'l', 3) );
}
*/
