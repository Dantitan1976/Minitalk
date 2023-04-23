/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:41:33 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/09 20:42:09 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultimo;

	if (!lst && !new)
		return ;
	else if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ultimo = ft_lstlast(*lst);
	ultimo->next = new;
}
