#include<stdio.h>
#include<string.h>
#include "libft.h"

int    main(void)
{
  int        i;
  char    s1[] = "Hello aorld";
  char    s2[] = "Hella world";
  char    s3[] = "Hell";
    
  printf("\n%s\n%s\n%s\n\n", s1, s2, s3);
    
  printf("s1,s1,5\nmemcmp: %3d     ", memcmp(s1, s1, 3));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s1, s1, 3));

  printf("s1,s2,5\nmemcmp: %3d     ", memcmp(s1, s2, 5));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s1, s2, 5));

  printf("s2,s1,5\nmemcmp: %3d     ", memcmp(s2, s1, 5));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s2, s1, 5));

  printf("s3,s1,5\nmemcmp: %3d     ", memcmp(s3, s1, 5));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s3, s1, 5));

  printf("s1,s3,5\nmemcmp: %3d     ", memcmp(s1, s3, 5));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s1, s3, 5));

  printf("s3,s3,5\nmemcmp: %3d     ", memcmp(s3, s3, 5));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s3, s3, 5));

  printf("s3,s3,6\nmemcmp: %3d     ", memcmp(s3, s3, 6));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s3, s3, 6));

  printf("s3,s3,0\nmemcmp: %3d     ", memcmp(s3, s3, 0));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s3, s3, 0));

  printf("s3,s1,5\nmemcmp: %3d     ", memcmp(s3, s1, 5));
  printf("ft_memcmp: %3d\n\n", ft_memcmp(s3, s1, 5));

  printf("\"\",\"\",1\nmemcmp: %3d     ", memcmp("", "", 1));
  printf("ft_memcmp: %3d\n\n", ft_memcmp("", "", 1));

  return 0;
}
