/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:09:40 by marvin            #+#    #+#             */
/*   Updated: 2025/08/15 18:09:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
    void *content;  
    struct s_list *next; 
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list *nn;

    nn=(t_list*)malloc (sizeof(t_list));
    if(!nn)
        return (NULL);
    nn->content=content;
    nn->next=NULL;
}
void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next=lst;
    *lst=new;
}   
int ft_lstsize(t_list *lst)
{
    t_list*p;
    int c;

    c = 0;
    p = lst;
    while(p != NULL)
    {
        p = p->next;
           c++;
    }
    return(c);
}

t_list *ft_lstlast(t_list *lst)
{
    t_list*p;
    p = lst;
    if(!p)
    return (NULL);
    while(p->next != NULL)
    {
        p = p->next;
    }
    return(p);
}
void     ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list*p;
        if(!lst || !new)
            return(NULL);
        p = ft_lstlast(*lst);
        p->next = new;
        new->next=NULL;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!lst || !del)
        return (NULL);
    del(lst->content);
    free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *p;

    if (!lst || !del)
        return (NULL);
    p = *lst;
    while(p != NULL)
    {
        p = (*lst)->next;    
        del((*lst)->content);    
        free(*lst);             
        *lst = p;              
    }
    *lst = NULL; 
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *p;
     
    if (!lst || !f)
        return (NULL);
    while(p != NULL)
    {
        p=lst->next;
        f(lst->content);
        lst= p;
    }
}

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
// {
//     t_list *p;
//     int     i;

//     p=(t_list*) malloc((ft_lstsize(lst) + 1) * sizeof(t_list));
//     if(!p)
//         return (NULL);
//     i=0;
//     while(i<ft_lstsize(lst))
//     {
//         p[i].content=f(lst->content);
//         p=p->next;
//         lst=lst->next;
//     }
