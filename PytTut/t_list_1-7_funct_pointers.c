 #include <unistd.h>
 #include<stdlib.h>

    typedef struct    s_list
  {
    void            *content;
    struct s_list    *next;
  }                t_list;

////////////////////////////////// 1
t_list    *ft_lstnew(void *content)
{
    t_list *new_list;

    if(!(new_list = (t_list*)malloc(sizeof(t_list))))
        return (NULL);
    new_list -> content = content;
    new_list -> next = NULL;
    return(new_list);
}

////////////////////////////////// 2
void    ft_lstadd_front(t_list **lst, t_list *new)
{
  if (lst)
  {
    if (*lst)
      new->next = *lst;
    *lst = new;
  }
}

/////////////////////////////////// 3
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

/////////////////////////////////// 4
t_list *ft_lstlast(t_list *lst)
{
  if (lst)
    while (lst->next)
        lst = lst->next;
  return (lst);
}

/////////////////////////////////// 5
void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list *last;
  
  if (lst)
    if (*lst)
    {
      last = ft_lstlast(lst);
      last->next = new;
    }
}

/////////////////////////////////// 6
void delete_content(void* content)
{
    if (content)
//      free(content)
      ;
}

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
  if (del)
  {
    del(lst->content);
    free(lst);
  }
}

/////////////////////////////////// 7
void ft_lstclear(t_list **lst, void (*del)(void*))
{
  t_list *ptr;
  
  ptr = lst;
    while (ptr)
    {
      ptr = (*lst)->next;
      ft_lstdelone(*lst, del);
      *lst = ptr;
    }
   if (lst)
     lst = NULL;
}
////////////////////////////////
 
int main()
{
  t_list *current;
  char *cont;
  
  //create my dinamic content;
  cont = (char*)malloc(sizeof(char) * 2);
  *cont = 'a'; *(cont + 1) = '\0';
  
  int n = 2;
  
  //create head of list;
  t_list *head;
  head = NULL;

  //create n lists;
  while(n--)
  {
    if (!head)
    {
      current = ft_lstnew(cont);
      head = current;
    }
    else
    {
      current->next = ft_lstnew(cont);
      current = current->next;
    }
  }
  
  // function 2;
  t_list *neww_begin;
      char *cont1 = (char*)malloc(sizeof(char) * 2);
  *cont1 = 'b'; *(cont1 + 1) = '\0';
  neww_begin = ft_lstnew(cont1);
  ft_lstadd_front(&head, neww_begin);
  
  // function 3;
  int size_list;
  size_list = ft_lstsize(head);
  
  //function 4;
  t_list *last;
  last = ft_lstlast(head);
  
    //////////******for function 6;******///////////
  t_list *del_one;
  del_one = last;
  
  //function 5;
    t_list *neww_last;
      char *contf = (char*)malloc(sizeof(char) * 2);
  *contf = 'f'; *(contf + 1) = '\0';
  neww_last = ft_lstnew(contf);
  ft_lstadd_back(&head, neww_last);
  
  //function 6;
  void (*funptr)(void *) = delete_content;
  ft_lstdelone(del_one->next, funptr);
  del_one->next = NULL;
  
  //function 7;
  t_list **tmp;
  
  tmp = &head;
  ft_lstclear(tmp, funptr);

return (0);
}
