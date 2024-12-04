/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:23:26 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/02 14:25:15 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isprint (char a)
{
    if (a >= 32 && a <= 126)
    {
        return (16384);
    }
    return (0);
}