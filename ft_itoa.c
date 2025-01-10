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

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		j;

	if (n == -2147483648)
		return ("-2147483648");
	i = ft_numlen(n);
	s = malloc(sizeof(char) * (i + 1));
	j = i;
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	while (i > 0)
	{
		if (s[0] == '-')
		{
			i--;
			s[i] = (n % 10) + '0';
			n /= 10;
			s[0] = '-';
		}
		else
		{
			i--;
			s[i] = (n % 10) + '0';
			n /= 10;
		}
	}
	s[j] = '\0';
	if (!s)
		return (NULL);
	return (s);
}

#include <stdio.h>
int main(void)
{
	int n = 3;
	printf("%s\n", ft_itoa(n));
}
