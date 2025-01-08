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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int argc, const char *argv[])
{
	char	**tabstr;
	int		i;
	int		arg;

	if (argc == 1)
		return (0);
	i = 0;
	if ((arg = atoi(argv[1])) == 1)
	{
		if (!(tabstr = ft_split("          ", ' ')))
			printf("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				printf("%s", tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 2)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
			printf("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				printf("%s", tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 3)
	{
		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
			printf("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				printf("%s", tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 4)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
			printf("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				printf("%s", tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 5)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
			printf("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				printf("%s", tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 6)
	{
		if (!(tabstr = ft_split("", 'z')))
			printf("NULL");
		else if (!tabstr[0])
			printf("ok\n");
	}
	return (0);
}
