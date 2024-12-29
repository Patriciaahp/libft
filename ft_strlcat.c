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

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (size + j);
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + ft_strlen(&src[j]));
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