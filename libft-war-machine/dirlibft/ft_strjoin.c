/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:39:33 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/06 18:02:30 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*ss ;
	char	*p;
	int	i;
	int	j;

	j = 0;
	i = 0;
	ss = (char*) s2;	
	s = (char*) s1;
	p = (char*) malloc ((len(ss) + len(s)) *sizeof(char));
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	while (ss[j] != '\0')
	{
		p[i] = ss[j];
		i++;
		j++;
	}
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[]="hello";
	char y[]="world";
	char *o = ft_strjoin(x, y);
	printf("%s",o);
}*/
