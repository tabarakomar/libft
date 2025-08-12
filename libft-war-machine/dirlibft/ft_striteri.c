/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:48:55 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 08:32:25 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

void  f(unsigned int n, char *d)
{
    (void)n;
    *d = 'u';
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    c;
    unsigned int    i;

    if (!s || !f)
        return;
    i = 0;
    c = len(s);
    while(i < c)
    {
        f(i, &s[i]);
        i++;
    }
}
/*
int     main(void)
{
    char d[] = "abcd";
    printf("%s\n", d);
    ft_striteri(d, f);
    printf("%s\n", d);
}
*/