/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:02:15 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/14 10:21:47 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while ((dest[i] != '\0'))
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= j)
		return (i + j);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[39] = "Hello World!";
  char src[] = "holaholaholaqqqq";
  int a = 30;
    printf("%lu\n", strlen(dest));
	   printf("%lu\n", strlen(src));
printf("%d\n",ft_strlcat(dest, src, a) );
  printf("%s\n", dest);
  printf("%s\n", src);
  return 0;
}
*/