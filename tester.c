/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:40:06 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/11/26 11:31:30 by dpaccagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	*ft_plusone(unsigned int i, char *str)
{
	*str += i;
	return (void *)str;
}

int	main(void)
{

	char str1[] = "abcdef";
	//char str2[] = "abci";
	ft_striteri(str1, ft_plusone(1, &str1));
	printf("%s\n", str1);
}
