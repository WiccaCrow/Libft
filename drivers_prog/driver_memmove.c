#include<stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char dst[11] = "123456789k";
    char src[6] = "asdfg";
    char src_back[11] = "123456789k";

    printf("\ndst = %s\nsrc = %s\n", dst, src);
    printf("memmove     %s\n", memmove(dst, src, 5));
    memmove(dst, src_back, 11);
    printf("ft_memmove  %s\n", ft_memmove(dst, src, 5));
    memmove(dst, src_back, 11);

    printf("The two strings may overlap:\n");
    printf("memmove     %s\n",    memmove(&dst[3], &dst[1], 5));
    memmove(dst, src_back, 11);
    printf("ft_memmove  %s\n", ft_memmove(&dst[3], &dst[1], 5));
    memmove(dst, src_back, 11);

    printf("\nThe two strings may overlap (dst[x] to dst[y]):  ");
    printf("& copy < & buffer \n");
    printf("memmove     %s\n",    memmove(&dst[3], &dst[1], 5));
    memmove(dst, src_back, 11);
    printf("ft_memmove  %s\n", ft_memmove(&dst[3], &dst[1], 5));
    memmove(dst, src_back, 11);

    printf("\nThe two strings may overlap (dst[x] to dst[y]):  ");
    printf("& copy > & buffer \n");
    printf("memmove     %s\n",    memmove(&dst[1], &dst[3], 5));
    memmove(dst, src_back, 11);
    printf("ft_memmove  %s\n", ft_memmove(&dst[1], &dst[3], 5));
    memmove(dst, src_back, 11);

    return 0;
}