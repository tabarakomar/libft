/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:22:09 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 11:50:17 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*pp;

	pp = (char *)s;
	j = 0;
	while (pp[j] != '\0')
	{
		if (pp[j] == c)
		{
			j++;
			while (pp[j] != c)
			{
				j++;
			}
			return (&pp[j]);
		}
		else
		{
			j++;
		}
	}
	return (&pp[j]);
}
/*
#include <stdio.h>
int main ()
{
	char x[]="helleo";
	char y='l';
	printf("%s",ft_strrchr(x, y));
}
*/