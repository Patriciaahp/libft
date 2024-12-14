/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:35:26 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 09:13:20 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
void	ft_bzero(void *s, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = '\0';
		n--;
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[] = "sdfgh ds g";
	char c[] = "sdfgh ds g";
	int b = 1;

printf("%s\n", a);
   ft_bzero(a, b);
   printf("%s\n", a);
   printf("%s\n", c);
     bzero(c, b);
	 printf("%s\n", c);
}
*/