/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttomatrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:38:07 by dimioui           #+#    #+#             */
/*   Updated: 2022/04/05 15:38:16 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_lsttomatrix(t_list *lst)
{
	char	**matrix;
	t_list	*aux;
	char	*temp;

	aux = lst;
	matrix = NULL;
	while (aux)
	{
		temp = ft_strdup(aux->content);
		matrix = ft_extend_matrix(matrix, temp);
		aux = aux->next;
		free(temp);
	}
	return (matrix);
}
