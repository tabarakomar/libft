/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:32:54 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/06 14:47:34 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	i--;
	p = (char *) malloc (i * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (j <= i)
	{
		p[j] = s[j];
		j++;
	}
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	char v[]="hello world";
	char *y=ft_strdup(v);
	printf("%s",y);
	free (y);
}*/
