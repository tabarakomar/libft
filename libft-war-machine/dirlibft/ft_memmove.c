/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:59:14 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/05 17:21:04 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t		i;

	if (!to || !from)
		return (0);
	s = (unsigned char *)from;
	d = (unsigned char *)to;
	i = 0;
	while (i < numBytes)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz"; // Array of size 5

    printf("%s","str1 before memmove ");
    printf("%s",str1);

    ft_memmove(str1, str2, sizeof(str2));

    printf("%s","\nstr1 after memmove ");
    printf("%s",str1);

    return 0;
}*/
