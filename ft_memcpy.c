/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:12:25 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/14 10:22:01 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (n > 0)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char dest[20] = " ";
	char src[20] = " ";
	
		char dest1[20] = " ";
	char src1[20] = " ";


	printf("%s\n", dest);
	printf("%s\n", memcpy(dest, src, 3));
		printf("%s\n", dest);
			printf("%s\n", "separador");
			printf("%s\n", dest1);
	printf("%s\n", ft_memcpy(dest1, src1, 3));
	printf("%s\n", dest1);

}*/