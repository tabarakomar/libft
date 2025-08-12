/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:23:35 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/05 15:19:30 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

void	*ft_memset(void *str , int c, size_t l)
{
	unsigned char	*u;

	u = (unsigned char*) str;
	while(l > 0)
	{
		*u = (unsigned char)c;
		u++;
		l--;
	}
	return (u);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
//    char *str = NULL;

	char str[5] = "hello";
	memset(str, 'a', 14);
	// printf("%s", ft_memset(str, 'a', 5));
	printf("%s\n", str);
}*/
