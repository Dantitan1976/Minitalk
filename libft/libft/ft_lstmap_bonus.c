/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:06:34 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/06 13:46:07 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temporal;
	t_list	*resultante;

	if (!lst || !f)
		return (NULL);
	resultante = NULL;
	while (lst)
	{
		temporal = ft_lstnew((*f)(lst->content));
		if (!temporal)
		{
			ft_lstclear(&resultante, del);
			return (NULL);
		}
		ft_lstadd_back(&resultante, temporal);
		temporal = temporal->next;
		lst = lst->next;
	}
	return (resultante);
}
