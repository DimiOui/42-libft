/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:17:13 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/11/24 17:09:09 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*c_s1;
	unsigned const char	*c_s2;

	i = 0;
	c_s1 = (unsigned const char *)s1;
	c_s2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (c_s1[i] != c_s2[i])
		{
			return (c_s1[i] - c_s2[i]);
		}
		i++;
	}
	return (0);
}
