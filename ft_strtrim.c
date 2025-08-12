/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:03:00 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 12:42:53 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		search(char s,  char const*set)
{
	int		i;
	
	i = 0;
	while(set[i] !='\0')
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}


int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*d;
	char	*v;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if(!s1 || !set)
		return (NULL);
	v = (char*)s1;
	d = malloc (ft_strlen(v) + 1);
	if (! d)
		return (NULL);
	while (s1[i] && ! search(s1[i],set))
		i++;
	while(s1[i] && search(s1[i],set))
	{
		i++;		
	}
	while (s1[i] && ! search(s1[i],set))
	{
		d[j] = s1[i];
		i++;
		j++;
	}
	return (d);
}
/*#include <stdio.h>
int	main(void)
{
	char  s1[]="";
	char  s[] = "c";
	char  *c;
	c = ft_strtrim(s1, s);
	int	i=0;
	while(c[i] !='\0')
	{
		printf("%c",c[i]);
		i++;
	}
}*/