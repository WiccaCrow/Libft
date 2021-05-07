#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{

    int c = 0
    ; //w
    char s[] = "hella worlda";

//    printf("*%d*\n", (int)*strrchr(s, c) + 5);
//  printf("*%d*\n\n", (int)*ft_strrchr(s, c) + 5);
// for '\0'
//    printf("*%s*\n", ft_strrchr(s, c));

    printf("*%s*\n", strrchr(s, c+97));
    printf("*%s*\n\n", ft_strrchr(s, c+97));

    c = 0
            ;
    printf("*%s*\n", strrchr(s, c));
    printf("*%s*\n\n", ft_strrchr(s, c));

    s[0] = 0;
    printf("*%s*\n", strrchr(s, c));
    printf("*%s*\n\n", ft_strrchr(s, c));

    s[0] = 0;
    printf("*%s*\n", strrchr(s, c+97));
    printf("*%s*\n\n", ft_strrchr(s, c+97));
    printf("without char in st\n");

    printf("*%s*\n", strrchr(s, c+98));
    printf("*%s*\n\n", ft_strrchr(s, c+98));

    printf("*%s*\n", strrchr(s, c+104));
    printf("*%s*\n\n", ft_strrchr(s, c+104));

    s[0] = 'h';
    printf("*%s*\n", strrchr(s, c+98));
    printf("*%s*\n\n", ft_strrchr(s, c+98));

    printf("*%s*\n", strrchr(s, c+104));
    printf("*%s*\n\n", ft_strrchr(s, c+104));

    return 0;
}