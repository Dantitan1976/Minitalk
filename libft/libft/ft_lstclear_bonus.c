/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:33:51 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/06 11:55:59 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*puntero;
	t_list	*borrar;

	if (!lst || !del)
		return ;
	puntero = *lst;
	while (puntero)
	{
		borrar = puntero->next;
		ft_lstdelone(puntero, del);
		puntero = borrar;
	}
	*lst = NULL;
}
