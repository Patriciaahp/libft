/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:58:44 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/16 10:32:43 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
