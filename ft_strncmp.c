/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:55:18 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:54:33 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n != 0)
	{
		if (!(s1[i] == s2[i]))
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
char *s1 = "\200";
char *s2 = "\0";
int n = 5;
printf("%d\n", ft_strncmp(s1, s2, n));
printf("%d\n", strncmp(s1, s2, n));

	return (0);
}*/