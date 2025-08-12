/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:34:13 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/06 17:38:07 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	p = (char *) malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i <= len + 1)
	{
		p[j] = s[i];
		j++;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	char h[]="hello";
	int t= 2;
	int l=3;
	char *p=ft_substr(h, t,l);
	printf("%s",p);
}*/
