#include<stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char dst01[] = "12345678";
    char dst02[] = "12345678";
    const char src0[] = "heya!";
    size_t n = 4
    ;
    int c = 97
    ;
    printf("           *dst = %s*  *src = %s*  *c   = %c*  *n   = %zd*\n", dst01, src0, c, n);
    printf("memccpy           %s    *     %s\n", dst01, memccpy(dst01, src0, c, n));
    printf("ft_memccpy        %s    *     %s\n\n", dst02, ft_memccpy(dst02, src0, c, n));

    char dst11[] = "12345678";
    char dst12[] = "12345678";
    n = 7
    ;
    printf("           *dst = %s*  *src = %s*  *c   = %c*  *n   = %zd*\n", dst11, src0, c, n);
    printf("memccpy           %s    *     %s\n", dst11, memccpy(dst11, src0, c, n));
    printf("ft_memccpy        %s    *     %s\n\n", dst12, ft_memccpy(dst12, src0, c, n));

    char dst21[] = "12345678";
    char dst22[] = "12345678";
    n = 3
    ;
    printf("           *dst = %s*  *src = %s*  *c   = %c*  *n   = %zd*\n", dst21, src0, c, n);
    printf("memccpy           %s    *     %s\n", dst21, memccpy(dst21, src0, c, n));
    printf("ft_memccpy        %s    *     %s\n\n", dst22, ft_memccpy(dst22, src0, c, n));

    char dst31[] = "12345678";
    char dst32[] = "12345678";
    n = 0
            ;
    printf("           *dst = %s*  *src = %s*  *c   = %c*  *n   = %zd*\n", dst31, src0, c, n);
    printf("memccpy           %s    *     %s\n", dst31, memccpy(dst31, src0, c, n));
    printf("ft_memccpy        %s    *     %s\n\n", dst32, ft_memccpy(dst32, src0, c, n));


    return 0;
}