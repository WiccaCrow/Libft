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
    
  printf("s1,s1,5\nstrncmp: %3d     ", strncmp(s1, s2, 3));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s1, s2, 3));

  printf("s1,s1,5\nstrncmp: %3d     ", strncmp(s1, s2, 5));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s1, s2, 5));

  printf("s2,s1,5\nstrncmp: %3d     ", strncmp(s2, s1, 5));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s2, s1, 5));

  printf("s3,s1,5\nstrncmp: %3d     ", strncmp(s3, s1, 5));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s3, s1, 5));

  printf("s1,s3,5\nstrncmp: %3d     ", strncmp(s1, s3, 5));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s1, s3, 5));

  printf("s3,s3,5\nstrncmp: %3d     ", strncmp(s3, s3, 5));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s3, s3, 5));

  printf("s3,s3,6\nstrncmp: %3d     ", strncmp(s3, s3, 6));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s3, s3, 6));

  printf("s3,s3,0\nstrncmp: %3d     ", strncmp(s3, s3, 0));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s3, s3, 0));

  printf("s3,s1,5\nstrncmp: %3d     ", strncmp(s3, s1, 5));
  printf("ft_strncmp: %3d\n\n", ft_strncmp(s3, s1, 5));

  return 0;
}
