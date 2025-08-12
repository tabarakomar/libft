/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:10:28 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 17:11:50 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
 
#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
	int	i;
	void	*p;

	i = 0;
	p = malloc(nmemb *size );
	if(p == NULL)
		return (NULL);
	ft_memset(p,0,nmemb);
	return p;
}
#include <stdio.h>
int	main(void)
{

	char *p = ft_calloc(5,4);
	for (int i = 0 ; i < 5 ; i++)
	{
	printf("%d",(int)p[i]);
	}
}
