/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:26:22 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/17 22:26:22 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	list = NULL;
	while (lst)
	{
		node = malloc(sizeof(t_list));
		if (!node )
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		node->content = f(lst->content);
		node->next = NULL;
		if (!list)
			list = node;
		else
		{
			temp = list;
			while (temp->next)
				temp = temp->next;
			temp->next = node;
		}
		lst = lst->next;
	}
	return (list);
}
*/