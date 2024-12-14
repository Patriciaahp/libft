/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:58:44 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/14 10:29:22 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(unsigned int num, unsigned int size)
{

}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int *arr2;
    size_t num_elements = 5;  
	int i;
    int j;

	i = 0;
    j = 0;

    arr = (int *)calloc(num_elements, sizeof(int));

    arr[2] = 10;


    while (i < num_elements) {  
        printf("arr[%d] = %d\n", i, arr[i]);
        i++;
    }
    free(arr);


 arr2 = (int *)malloc(num_elements * sizeof(int));

   arr2[4] = 5;


    while (j < num_elements) {  
        printf("arr2[%d] = %d\n", j, arr2[j]);
        j++;
    }
    free(arr2);
    
    return 0;
}