/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:59:57 by estarck           #+#    #+#             */
/*   Updated: 2022/10/06 09:35:19 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_element(t_list **new_element,
	t_list **lst, t_list **new_lst, void (*del)(void *))
{
	if (!*new_element)
	{
		ft_lstclear(lst, del);
		ft_lstclear(new_lst, del);
		return (0);
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_element;

	if (!f || !del)
		return (NULL);
	new_element = ft_lstnew(f(lst->content));
	if (!test_element(&new_element, &lst, &new_lst, del))
		return (NULL);
	new_lst = new_element;
	lst = lst->next;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!test_element(&new_element, &lst, &new_lst, del))
			break ;
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_element);
	}
	return (new_lst);
}
