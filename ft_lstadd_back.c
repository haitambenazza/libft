/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:20:13 by hbenazza          #+#    #+#             */
/*   Updated: 2023/11/16 17:23:43 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*traverse;

	if (lst && new)
	{
		if (!(*lst))
		{
			*lst = new;
			new->next = NULL;
			return ;
		}
		traverse = *lst;
		while (traverse->next)
		{
			traverse = traverse->next;
		}
		traverse->next = new;
	}
}

