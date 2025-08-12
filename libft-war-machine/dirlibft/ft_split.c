/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:57:26 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/12 13:01:06 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int     search(char s, char c )
{
    return(s == c);
}
int     wordc(char const *s, char c)
{
    int     cw;
    int     i;
    
    i = 0;
    cw = 0;
    while(s[i]!='\0')
    {
        if(search(s[i],c))
            cw ++;
            if(s[i+1]== '\0')
                cw--;
            if(s[i+1]==s[i])
                i++;
        i++;
    }
    return (cw);
}
void fill( char const *s, char *d, int start, int end)
{
    int i = 0;
    while (start < end && s[i] != '\0')
    {
        d[i] = s[start];
        i++;
        start++;
    }
    d[i] = '\0';
}
char **ft_split(char const *s, char c)
{
    char    **d;
    int     i;
    int     j;
    int     start;
    int     col;

    start = 0;
    j = 0;
    i = 0;
    d = malloc ((wordc(s, c) + 1) * sizeof(char *));
    if (d == NULL) 
        return (NULL);
    j = 0; 
    while(i < (wordc(s, c)+1))    
    {
        while(s[j] && search(s[j],c))
            j++; 
            
            start = j;
            while(s[j] && !search(s[j],c))
            j++;
            col = j - start;
            d[i] = malloc ((col+1) * sizeof(char));
            fill(s,d[i],start,j);
            i++;
    } 
    return (d);
}
#include <stdio.h>
int     main(void)
{
    char  s[20] ="h  ellold ";
    char c = ' ';
    int i=0;
     char **result = ft_split(s, c);
       if (result)
    {
        while(result[i])
        {
            printf("Word %d: %s\n", i, result[i]);
            i++;
        }
    }
    return 0;
    
}


