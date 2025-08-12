/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:11:13 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/10 14:16:00 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr_fd(char *s, int fd)
{
    int     i;

    i = 0;
    while(s[i] != '\0')
    {
        write(fd,&s[i],1);
        i++;
    }
}

int     main(void)
{
    char*u="hello";
    ft_putstr_fd(u,1);
}