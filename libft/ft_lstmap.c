/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 03:59:55 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/20 17:09:54 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_map;
	t_list	*current;

	head_map = NULL;
	while (lst && f)
	{
		if (!head_map)
		{
			if (!(current = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&head_map, del);
				return (NULL);
			}
			head_map = current;
		}
		else
		{
			current->next = ft_lstnew(f(lst->content));
			current = current->next;
		}
		lst = lst->next;
	}
	return (head_map);
}
