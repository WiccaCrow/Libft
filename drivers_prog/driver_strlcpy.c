#include<stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{

char dst[] = "12345678";
  const char src[] = "hey!!";
  char dst0[] = "12345678";
  printf("\n*%s*\n", dst);
  printf("%zd", strlcpy(dst, src, sizeof(dst)));
  printf("*%s*\n", dst);
    printf("%zd", ft_strlcpy(dst0, src, sizeof(dst0)));
    printf("*%s*\n", dst0);

char dst1[] = "1234";
  printf("\n*%s*\n", dst1);
  printf("%zd", strlcpy(dst1, src, sizeof(dst1)));
  printf("*%s*\n", dst1);
  char dst01[] = "1234";
    printf("%zd", ft_strlcpy(dst01, src, sizeof(dst01)));
    printf("*%s*\n", dst01);

char dst2[] = "1234";
    const char src2[] = "he he he";
    printf("\n*%s*\n", dst2);
    printf("%zd", strlcpy(dst2, src2, sizeof(dst2)));
    printf("*%s*\n", dst2);
    char dst02[] = "1234";
    printf("%zd", ft_strlcpy(dst02, src2, sizeof(dst02)));
    printf("*%s*\n", dst02);

    printf("bad dstsize. original abort");
size_t i = 17;
char dst3[] = "1234567890";
    printf("\n*%s*\n", dst3);
//    printf("%zd", strlcpy(dst3, src2, i));
//   printf("*%s*\n", dst3);
    char dst03[] = "1234567890";
    printf("%zd", ft_strlcpy(dst03, src2, i));
    printf("*%s*\n", dst03);

//str[i-1] = 'a';
    return 0;
}
