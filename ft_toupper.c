/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:05:14 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/05 14:11:47 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
int main()
{
    char ch;

    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, ft_toupper(ch));

    return 0;
}*/
