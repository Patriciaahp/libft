/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:52:00 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/16 10:34:00 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *string)
{
	char	*string2;
	int		i;

	i = 0;
	while (string[i])
		i++;
	string2 = malloc(sizeof(char) * (i + 1));
	if (!string2)
		return (NULL);
	i = 0;
	while (string[i] != '\0')
	{
		string2[i] = string[i];
		i++;
	}
	string2[i] = '\0';
	if (string2 != NULL)
		return (string2);
	return (NULL);
}
