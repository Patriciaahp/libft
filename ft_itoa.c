/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:06:39 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/09 12:58:11 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (n == -2147483648)
	{
		s = "-2147483648";
	}
	if (n == 0)
	//	s = 0;
	j = n;
    while (j)
	{
		j /= 10;
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}

	while (n)
	{
		s[i] = (n % 10) + '0'; 
        n /= 10;
		i++;
	}
		s[i] = '\0'; 
	if (!s)
	return (NULL);
    return (s);
}

#include <stdio.h>
int main(void)
{
	int n = 1;
	printf("%s\n", ft_itoa(n));
}

