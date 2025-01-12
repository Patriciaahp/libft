/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:39:19 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/10 19:39:19 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h> // Para open()
#include <unistd.h> // Para close() y write()

int main(void)
{
    int fd;

    // Abrir archivo en modo escritura
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        write(2, "Error al abrir el archivo\n", 26);
        return (1);
    }

    // Usar ft_putchar_fd para escribir en el archivo
    ft_putchar_fd('H', 1);
    ft_putchar_fd('o', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('a', fd);

    // Cerrar el archivo
    close(fd);

    return (0);
}
*/