/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:19:58 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/06 13:14:03 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*j;
	char			cc;
	size_t			y;

	y = 0;
	cc = (char)c;
	j = (unsigned char *)s;
	while (y < n)
	{
		if (j[y] == cc)
			return (&j[y]);
		y++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    const char s[] = "Aticleworld";
    //memchr(s,'c',5);
    char *p = memchr(s,99,5);
    printf("%s",p);
}*/
