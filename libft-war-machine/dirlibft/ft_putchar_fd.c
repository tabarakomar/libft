/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 12:37:22 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/10 14:14:56 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}
int     main()
{
    int fd = open ("hello.txt",O_RDWR);
    printf("%d",fd);
    ft_putchar_fd('a',fd);
}