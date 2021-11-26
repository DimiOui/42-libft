/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:15:41 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/11/24 16:44:31 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			*(char *)(dest + n) = *(const char *)(src + n);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(const char *)(src + i);
			i++;
		}
	}
	return (dest);
}
