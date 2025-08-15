/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:23:02 by marvin            #+#    #+#             */
/*   Updated: 2025/08/15 22:23:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int dlen(int n)
{
    int i;
    long nb;

    nb = n;
    i = 0;
    if (nb <= 0)
        i = 1;
    while (nb != 0)
    {
        nb = nb / 10;
        i++;
    }
    return i;
}
static void f(char *p, long nb, int l)
{
    while (nb > 0)
    {
        p[--l] = (nb % 10) + '0';
        nb = nb / 10;
    }
}

char *ft_itoa(int n)
{
    char *p;
    long nb;
    int l;

    nb = n;
    l = dlen(n);
    p = malloc(l + 1);
    if (!p)
        return NULL;
    p[l] = '\0';
    if (nb == 0)
    {
        p[0] = '0';
        return p;
    }
    if (nb < 0)
    {
        p[0] = '-';
        nb = -nb;
    }
    f(p, nb, l);
    return p;
}


// char *ft_itoa(int n)
// {
    // char *p;
    // long nb;
    // int l;

    // nb = n;
    // l = dlen(n);
    // p = malloc(l + 1);
    // if (!p)
    //     return NULL;
    // p[l] = '\0';
    // if (nb == 0)
    // {
    //     p[0] = '0';
    //     return p;
    // }
    // if (nb < 0)
    // {
    //     p[0] = '-';
    //     nb = -nb;
    // }
//     while (nb > 0)
//     {
//         p[--l] = (nb % 10) + '0';
//         nb = nb / 10;
//     }
//     return p;
// }

// int main(void)
// {
//     printf("%s", ft_itoa(222));
//     return 0;
// }