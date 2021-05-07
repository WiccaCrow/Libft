#include<stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[0xF00] = "";
    char buff2[0xF00] = "";
    size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 1;
    printf("%zd\n", max);

    printf("%zd\n", strlcat(buff1, str, max));
    printf("%zd\n", ft_strlcat(buff2, str, max));

    printf("%s**\n%s**\n\n\n\n", buff1, buff2);
    
    
    
    
//    Test2:
    char buff11[0xF00] = "there is no stars in the sky";
    char buff12[0xF00] = "there is no stars in the sky";
    size_t max1 = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");

    printf("%zd\n", max1);

    printf("%zd\n", strlcat(buff11, str, max1));
    printf("%zd\n", ft_strlcat(buff12, str, max1));

    printf("%s**\n%s**\n", buff11, buff12);
    
/*
char dst[] = "12345678";
  const char src[] = "hey!!";
  char dst0[] = "12345678";
  printf("\n*%s*\n", dst);
  printf("%zd", strlcat(dst, src, sizeof(dst)));
  printf("*%s*\n", dst);
    printf("%zd", ft_strlcat(dst0, src, sizeof(dst0)));
    printf("*%s*\n", dst0);

char dst1[11] = "1234";
  printf("\n*%s*\n", dst1);
  printf("%zd", strlcat(dst1, src, sizeof(dst1)));
  printf("*%s*\n", dst1);
  char dst01[11] = "1234";
    printf("%zd", ft_strlcat(dst01, src, sizeof(dst01)));
    printf("*%s*\n", dst01);

char dst2[11] = "1234";
    const char src2[] = "he he he";
    printf("\n*%s*\n", dst2);
    printf("%zd", strlcat(dst2, src2, sizeof(dst2)));
    printf("*%s*\n", dst2);
    char dst02[11] = "1234";
    printf("%zd", ft_strlcat(dst02, src2, sizeof(dst02)));
    printf("*%s*\n", dst02);

char dst3[10] = "";
    printf("\n*%s*\n", dst3);
    printf("%zd", strlcat(dst3, src2, sizeof(dst3)));
   printf("*%s*\n", dst3);
    char dst03[10] = "";
    printf("%zd", ft_strlcat(dst03, src2, sizeof(dst03)));
    printf("*%s*\n", dst03);

//str[i-1] = 'a';
 */
    return 0;
}


/*
 int main()
 {
     char str[] = "lorem ipsum dolor sit amet";
     char buff[16] = "rrrrrrrrrrrrrrr";
     printf("%zd\n", ft_strlcat(buff, str, 5));

     printf("%s**\n\n", buff);
     return (0);
 }
 */
