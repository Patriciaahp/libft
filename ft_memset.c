/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:48:27 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 09:36:05 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
void	*ft_memset(void *s, int c, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = c;
		i++;
		n--;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
  char str[20] = "Hello";
    
   
    ft_memset(str, 'A',15);
	printf("%s\n", str); 
    memset(str, 'B',15);
    printf("%s\n", str);  
    return 0;
}
*/