/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:25:01 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 17:42:39 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s ,size_t b)
{
	unsigned char	*u;
		
	u = (unsigned char *)s;
	while (b)
	{
		*u = '\0';
		b --;
		u ++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
//    char *str = NULL;
	char str[5] = "hello";
	ft_bzero(str, 4);
	printf("%s\n", str);
}
*/
