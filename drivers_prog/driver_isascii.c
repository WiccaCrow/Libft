#include<stdio.h>
#include<ctype.h>
#include "libft.h"

#define ISTRSIZE 10
#define VALUE 122

int	main(void)
{
	int		i;
	char	str[] = " 12$.9 (tEn) o'clock.";
    int    i_str2[ISTRSIZE] = {};
    
    for (i = 0; i < ISTRSIZE; i++)
        i_str2[i] = VALUE + i;
	
	for(i = 0;str[i] != '\0'; i++)
		printf("c_str %c isascii back %d and %d back ft_isascii\n", str[i], isascii(str[i]), ft_isascii(str[i]));
    
	for(i = 0;str[i] != '\0'; i++)
        if (isascii(str[i]) != ft_isascii(str[i]))
            printf("c_str %c isascii back %d and %d back ft_isascii\n", str[i], isascii(str[i]), ft_isascii(str[i]));
    
    for (i = 0; i < ISTRSIZE; i++)
         if (isascii(i_str2[i]) != ft_isascii(i_str2[i]))
             printf("i_str2 %d isascii back %d and %d back ft_isascii\n", i_str2[i], isascii(i_str2[i]), ft_isascii(i_str2[i]));
    
    for (i = 0; i < ISTRSIZE; i++)
        printf("i_str2 %d isascii back %d and %d back ft_isascii\n", i_str2[i], isascii(i_str2[i]), ft_isascii(i_str2[i]));
    return 0;
}
