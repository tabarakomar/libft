/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:15:24 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/06 13:46:10 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t;
	unsigned char	*u ;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	u = (unsigned char *)s2;
	t = (unsigned char *)s1;
	while (i < n)
	{
		if (u[i] != t[i] && u[i] != '\0' && t[i] != '\0')
			return (t[i] - u[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char o[]="helzo";
	char t[]="heldsf";
	int x = memcmp(o,t,4);
	printf("%d",x);
}*/
