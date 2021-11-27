/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dimi <Dimi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:40:06 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/11/28 00:12:24 by Dimi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	ft_isprint(int c);

int	main(void)
{

	char str1 = 'a';
	//char str2[] = "abci";
	ft_isprint(str1);
	printf("%d\n", str1);
}
