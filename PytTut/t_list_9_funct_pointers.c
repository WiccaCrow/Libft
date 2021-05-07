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

  /////////////////////////////////// 8
  void ft_fiter(void *content)
  {
    *((char *)content) = 'w';
  }

  void ft_lstiter(t_list *lst, void (*f)(void *))
  {
    while (lst)
    {
      f(lst->content);
      lst = lst->next;
    }
  }

  /////////////////////////////////// 9
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

  void *ft_fiter2(void *content)
  {
    void *cont_new;
    int i;
    int j;
    
    j = -1;
    i = strlen(content);
    cont_new = malloc(sizeof(*content)*i+1);
    while (((char*)content)[++j])
      ((char*)cont_new)[j] = ((char *)content)[j] + 1;
    ((char*)cont_new)[j] = 0;
    return (cont_new);
  }

  t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
  {
    t_list *head_map;
    void *func_iter_cont;
    t_list *current;
    
    head_map = NULL;
    func_iter_cont = f(lst->content);
    while(lst)
    {
      if (!head_map)
      {
        if(!(current = ft_lstnew(func_iter_cont)))
        {
          ft_lstclear(&head_map, del);
          return (NULL);
        }
        head_map = current;
      }
      else
      {
        current->next = ft_lstnew(func_iter_cont);
        current = current->next;
      }
      lst = lst->next;
    }
    return (head_map);
  }

  ////////////////////////////////
  int main()
  {
    t_list *current;
    char *cont;
    
    //create my dinamic content;
    cont = (char*)malloc(sizeof(char) * 2);
    *cont = 'a'; *(cont + 1) = '\0';
    
    int n = 5;
    
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
    
    // function 3;
    int size_list;
    size_list = ft_lstsize(head);
    
    //function 4;
    t_list *last;
    last = ft_lstlast(head);
    
      //////////******for function 6;******///////////
    t_list *del_one;
    del_one = last;
    
    //function 8;
    void (*fiter)(void *) = ft_fiter;
    ft_lstiter(head, fiter);
    
    //function 9;
    void *(*fiter2)(void *) = ft_fiter2;
    void (*funptr)(void *) = delete_content;
    t_list *new_lstmap;
    new_lstmap = ft_lstmap(head, fiter2, funptr);
    
  return (0);
  }
