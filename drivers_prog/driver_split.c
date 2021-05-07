#include<stdio.h>

#include<stdlib.h>
#include "libft.h"
#include <string.h>


    int main()
    {
        char str[] = "lorem ipsum dolor sit amet";
      
        char **res = ft_split(str, 'z');
        while (res)
        {
          printf("%s\n\n",  *res);
          res++;
          }

    
        return (0);
    }

