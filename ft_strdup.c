/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:22:22 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/11/24 11:23:16 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*target;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	target = malloc(sizeof(char) * size + 1);
	if (!target)
		return (NULL);
	while (src[i])
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
