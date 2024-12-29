/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:11:41 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:41:16 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (res * sign);
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char *str = "  \t \n    	-1234ab567";
printf("%d\n", ft_atoi(str));

	return (0);
}*/
