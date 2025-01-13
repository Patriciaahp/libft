/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:58:44 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/16 08:45:04 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(num * size);
	if (!arr)
		return (NULL);
	while (((char *)arr)[i])
	{
		((char *)arr)[i] = '\0';
		i++;
	}
	return (arr);
}

/*#include <stdio.h>
int main(void) {
    int *arr;
    int *arr2;
    size_t num_elements = 5;  
	int i;
    int j;

	i = 0;
    j = 0;

    arr = (int *)ft_calloc(num_elements, sizeof(int));


    while (i < num_elements) {  
        printf("arr[%d] = %d\n", i, arr[i]);
        i++;
    }
    free(arr);
}*/