/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:03:24 by estarck           #+#    #+#             */
/*   Updated: 2022/03/01 19:15:03 by estarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_lstsize(t_list *lst)
{
	if (lst == 0x0)
		return (0);
	return (ft_lstsize(lst->next) + 1);
}
*/

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0x0)
	{
		lst = (*lst).next;
		i++;
	}
	return (i);
}
