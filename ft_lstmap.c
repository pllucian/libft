/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 01:38:46 by pllucian          #+#    #+#             */
/*   Updated: 2020/11/21 02:27:11 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	first = new;
	while (lst->next)
	{
		if (!(new->next = ft_lstnew(f(lst->next->content))))
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	return (first);
}
