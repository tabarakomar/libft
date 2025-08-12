/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:21:09 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/10 12:14:55 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
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
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char    *p;
    unsigned int    c;
    unsigned int   i; 
    char *u = (char *)s;

    i = 0;
    c = 0;
    c = len(u);
    p = (char *) malloc( (c+1) * sizeof(char));
    if (p == NULL)
        return (NULL);
    while(i<c && u[i])
    {
        p[i] = f(i,u[i]);
        i++;
    }
    p[i]='\0';
    return (p);
}
////////////////////////////////////////////////
#include <stdio.h>

char f(unsigned int i,char c)
{
	c += i;
	return (c);
}
int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);

	printf("%s\n", str2);
}