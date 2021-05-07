#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{

    int c = 0
    ; //w
    char s[] = "hella worlda";
    size_t n;
    n = 12
            ;
    printf("\n*%s*\n", s);

    printf("c = %5c    :    *%s*\n", c+97, memchr(s, c+97, n));
    printf("c = %5c    :    *%s*\n\n", c+97, ft_memchr(s, c+97, n));

    c = 0
            ;
    printf("*%s*\n", s);
    printf("c =     0    :    *%s*\n", memchr(s, c, n));
    printf("c =     0    :    *%s*\n\n", ft_memchr(s, c, n));

    s[0] = 0;
    printf("*\\0%s*\n", s+1);
    printf("c =     0    :    *%s*\n", memchr(s, c, n));
    printf("c =     0    :    *%s*\n\n", ft_memchr(s, c, n));

    s[0] = 0;
    printf("*\\0%s*\n", s+1);
    printf("c = %5c    :    *%s*\n", c+97,memchr(s, c+97, n));
    printf("c = %5c    :    *%s*\n\n",c+97, ft_memchr(s, c+97, n));


    printf("without char in st\n");

    printf("\n\\0*%s*\n", s+1);
    printf("c = %5c    :    *%s*\n",c+98, memchr(s, c+98, n));
    printf("c = %5c    :    *%s*\n\n",c+98, ft_memchr(s, c+98, n));

    printf("\\0*%s*\n", s+1);
    printf("c = %5c    :    *%s*\n",c+104, memchr(s, c+104, n));
    printf("c = %5c    :    *%s*\n\n",c+104, ft_memchr(s, c+104, n));

    s[0] = 'h';
    printf("*%s*\n", s);
    printf("c = %5c    :    *%s*\n",c+98, memchr(s, c+98, n));
    printf("c = %5c    :    *%s*\n\n",c+98, ft_memchr(s, c+98, n));

    printf("*%s*\n", s);
    printf("c = %5c    :    *%s*\n",c+104, memchr(s, c+104, n));
    printf("c = %5c    :    *%s*\n\n",c+104, ft_memchr(s, c+104, n));

    return 0;
}