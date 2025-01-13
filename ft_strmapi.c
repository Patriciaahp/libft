/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:39:02 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/10 19:39:02 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	if (!str)
		return (NULL);
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>

// Función que transforma cada carácter en mayúscula si su índice es par
char ft_transform(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32); // Convierte a mayúscula si es letra minúscula
	return (c);
}

int main(void)
{
	char str[] = "hola mundo";
	char *result;

	// Prueba de ft_strmapi con la función transform
	result = ft_strmapi(str, ft_transform);

	if (result)
	{
		printf("Original: %s\n", str);
		printf("Transformado: %s\n", result);
		free(result); // Liberar la memoria asignada
	}
	else
	{
		printf("Error: ft_strmapi devolvió NULL\n");
	}

	return (0);
}*/