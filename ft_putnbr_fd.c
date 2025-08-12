/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:22:19 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/10 14:42:32 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	printre(char *str, int l,int fd)
{
	while (l >= 0)
	{
		write(fd, &str[l], 1);
		l--;
	}
}
void ft_putnbr_fd(int n, int fd)
{  
    char	arr[12];
	char	u;
	int		i;

	i = 0 ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	while (n > 9)
	{
		u = (n % 10) + '0';
		n = n / 10;
		arr[i] = u;
		i++;
	}
	arr[i] = n + '0';
	printre (arr, i,fd);
}
int     main(void)
{
    ft_putnbr_fd(-123456,0);
}