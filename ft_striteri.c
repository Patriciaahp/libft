/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:17:46 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/10 20:17:46 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,
									char *))
{
	unsigned int i;

	i = 0;
	if (!s || !f)
		return;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

// Función que convierte a mayúscula los caracteres en índices pares
void modify(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')  // Si índice es par y el carácter es minúscula
        *c = *c - 32;                         // Convierte a mayúscula
}

int main(void)
{
    char str[] = "hola mundo";

    printf("Antes: %s\n", str);
    ft_striteri(str, modify);  // Aplica ft_striteri con la función modify
    printf("Después: %s\n", str);

    return (0);
}
*/