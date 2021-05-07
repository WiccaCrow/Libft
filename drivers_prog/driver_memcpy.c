#include<stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char dst01[] = "12345678";
    char dst02[] = "12345678";
    const char src0[] = "hey!!";
    size_t n0 = 4
    ;

    printf("\ndst = %s\nsrc = %s\nn   = %zd\n\n", dst01, src0, n0);
    printf("memcpy\n%s", memcpy(dst01, src0, n0));

    printf("\n\nft_memcpy\n%s", ft_memcpy(dst02, src0, n0));
    return 0;
}