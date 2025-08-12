/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:32:16 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 18:14:45 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	j;
	size_t	sum;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	sum = 0;
	if (size > ld)
		sum = ld + ls;
	else
	sum = ls + size;
	j = 0;
	while (src[j] != '\0' && size > j + 1)
	{
		dst[ld] = src[j];
		j++;
		ld++;
	}
	dst[ld]='\0';
	return (sum);
}

// int	main(void)
// {
// 	char dest[]="worl";
// 	char src[]="hello";
// 	//ft_strlcat(u, t,5);
// 	printf("%zu",ft_strlcat(dest, src, 2));
// 	printf("\n");
// 	printf("%s",dest);
// }
