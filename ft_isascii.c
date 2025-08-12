/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:13:33 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 18:29:23 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (!(a >= 0 && a <= 127))
		return (0);
	return (1);
}
/*
#include<stdio.h>
int     main(void)
{
        printf("%d",ft_isascii(')'));
}*/
