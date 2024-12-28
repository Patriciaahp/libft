/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:51:27 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/17 09:57:40 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	find_char(char const *s, char c, int *i, char **s3)
{
	int		k;
	int		l;

	k = 0;
	l = 0;
	while (s[*i] != '\0')
	{
		if (s[*i] == c)
		{
			k++;
			l = 0;
			(*i)++;
		}
		if (l == 0)
			s3[k] = (char *)malloc((*i + 1) * sizeof(char));
		s3[k][l] = s[*i];
		l++;
		(*i)++;
	}
	s3[k][l] = '\0';
	return (k);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**s3;
	int		k;

	k = 0;
	i = 0;
	while (s[i])
		i++;
	s3 = (char **)malloc((i + 1) * sizeof(char *));
	if (!s3)
		return (NULL);
	i = 0;
	k = find_char(s, c, &i, s3);
	s3[k + 1] = NULL;
	return (s3);
}

/*#include <stdio.h>
int main(void)
{
    char *s = "holazholazholazhola";
    char c = 'z';

    char **result = ft_split(s, c);
    for (int i = 0; result[i] != NULL; i++) {
        printf("Subcadena %d: %s\n", i, result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}*/