#include "libft.h"
#include <stdio.h>
#include <string.h>

int    main(void)
{
    char    str1[] = "\0very body looking for something.";
    char    str2[] = "\0very body looking for something.";

    char    str3[] = "Every body looking for something.";
    char    str4[] = "Every body looking for something.";

    int     j = 5
    ;
    int j0;

    printf("\n'\\0'%s\n\nbzero\n", str1+1);
    bzero(str1, j);
    printf("n = %d\n", j);
    for (j0 = 0; j0 < j+4; j0++)
        printf("%d ", str1[j0]);
    printf("\n\nft_bzero\n");
    ft_bzero(str2, j);
    for (j0 = 0; j0 < j+4; j0++)
        printf("%d ", str2[j0]);
    printf("\n");

    printf("\n\n%s\n\nbzero\n", str3);
    j = 0;
    printf("n = %d\n", j);
    bzero(str3, j);
    for (j0 = 0; j0 < j+4; j0++)
        printf("%d ", str3[j0]);
    printf("\n\nft_bzero\n");
    ft_bzero(str4, j);
    for (j0 = 0; j0 < j+4; j0++)
        printf("%d ", str4[j0]);
    printf("\n");
    return 0;
}