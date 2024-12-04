/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:07:50 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/02 13:52:54 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalpha(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
	 return (1024);
	}
	return 0;
}
/*
#include <stdio.h> 
int main (void)
{
	char a = 'w';

	int result = ft_isalpha(a);
	  printf("%d\n", result);
}*/
