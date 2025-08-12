/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:49:05 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 16:58:17 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if(!big)
	return (NULL);
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return((char*)big);
	while(big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char*)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
// int		main(void)
// {
// 		char d[]="hello for world";
// 		char t[]="for";
// 		char *o = ft_strnstr(d, t, 9);
// 		printf("%s",o);
// }
