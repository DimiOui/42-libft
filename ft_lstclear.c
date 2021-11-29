/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:15:03 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/11/29 13:06:08 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ptr;

	if (!del || !*lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		tmp = ptr -> next;
		ft_lstdelone(ptr, del);
		ptr = tmp;
	}
	*lst = (NULL);
}
