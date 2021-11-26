/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:10:58 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/11/24 11:42:11 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len)
	{
		*(unsigned char *)(str + i) = (unsigned char)c;
		i++;
		len--;
	}
	return (str);
}
