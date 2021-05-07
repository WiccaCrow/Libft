 #include <unistd.h>
 #include<stdlib.h>
 
    typedef struct    s_list
  {
    void            *content;
    struct s_list    *next;
  }                t_list;

int ft_lstsize(t_list *lst)
{
    int    count;

    count = 0;
    while (lst)
    {
      lst = lst->next;
        ++count;
    
    }
    return (count);
}
///////////////////////////////////
t_list *ft_lstlast(t_list *lst)
{
  if (lst)
  
    while (lst->next)
        lst = lst->next;
    return (lst);
}
///////////////////////////////////

void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list *last;
  
last = ft_lstlast(lst);
last->next = new;
}

//////////////////////////////////
t_list    *ft_lstnew(void *content)
{
    t_list *new_list;

    if(!(new_list = (t_list*)malloc(sizeof(t_list))))
        return (NULL);
    new_list -> content = content;
    new_list -> next = NULL;
    return(new_list);
}
/*
void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst)
    {
        (*new).next = *lst;
        *lst = new;
    }
    else
        *lst = new;
}
 */
 
void delete_content(void* content)
{
    if (content)
//      free(content)
      ;
}
 ////////////////////////////////
void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
  if (del)
  {
    del(lst->content);
    free(lst);
  }
}
 
 
 ////////////////////////////////
int main()
{
  
char *content = "5";
  
  int n = 5;
  int i = 0;
  
  
t_list el[5];

while(n--)
{
  if (n == 0)
  {
    (el[i]).content = content;
    (el[i]).next = NULL;
    }
  else
  {
    (el[i]).content = content;
  (el[i]).next = el+i+1;
  i++;
  }
}

(el[i]).next = ft_lstnew(content);

int cou = ft_lstsize(&el[0]);
t_list *last;
last = ft_lstlast(&el[0]);

t_list *neww = ft_lstnew(content);
ft_lstadd_back(&el[0], neww);

void (*funptr)(void *) = delete_content;
ft_lstdelone(neww, funptr);

return (0);
}
