/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 09:36:17 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/10 12:37:29 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int  n)
{
	char	*pr;
	int	i;
	int	cs;
	int	m;
	char	*q;
	int	cw;

	cw = 0;
       cs = 0;	
	i = n;
	m = 0;
	if(n<0)
	{
		n = n * -1;
		printf("%c",'-');
	}
	while(i != 0)
	{
		i =  i / 10;
		cs++;
	}
	pr = (char*) malloc (cs * sizeof(char));
	q = (char*) malloc (cs *sizeof(char));
	if(!pr || !q)
		return (NULL);
	while (n != 0)
	{
		m = n % 10;
		n = n / 10;
		pr[cw] = m + '0';
		cw++;
	}
	i = 0;
	while (cw--)
	{
		q[i] = pr[cw];
		i++;
	}
	return (q);
}
int	main(void)
{
	printf("%s",ft_itoa(-123456789));
}
