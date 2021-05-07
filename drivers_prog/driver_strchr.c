#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{

    int c = 0
    ; //w
    char s[] = "hella worlda";

    printf("*%d*\n", (int)*strchr(s, c) + 5);
  printf("*%d*\n\n", (int)*ft_strchr(s, c) + 5);
// for '\0'
//    printf("*%s*\n", ft_strchr(s, c));

    c += 97
    ;
    printf("*%s*\n", strchr(s, c));
    printf("*%s*\n\n", ft_strchr(s, c));

    c += 1
            ;
    printf("*%s*\n", strchr(s, c));
    printf("*%s*\n\n", ft_strchr(s, c));

    s[3] = 0;
    printf("*%s*\n", strchr(s, c));
    printf("*%s*\n", ft_strchr(s, c));
    return 0;
}