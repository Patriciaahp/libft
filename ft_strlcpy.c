/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:20:39 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:52:56 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	while ((src[i] != '\0') && (size != 1))
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dest[i] = '\0';
	return (j);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "Hello World!";
  char str2[30];
  int a = 4;
  printf("%ld\n", ft_strlcpy(str2, str1, a));
  printf("%s\n", str1);
  printf("%s\n", str2);

  return 0;
}*/
