/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:07:50 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:44:47 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char a = 'w';

	int result = ft_isalpha(a);
	int result2 = isalpha(a);
	printf("%d\n", result);
	printf("%d\n", result2);
}
*/