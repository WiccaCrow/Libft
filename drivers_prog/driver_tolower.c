#include<stdio.h>
#include<ctype.h>
#include "libft.h"

#define STR1 "I love PIZZA. It coST 2$"

int	main(void)
{
	int		i;
	char	str2[] = STR1;
	
    printf("%s\n", STR1);
    
    for(i = 0;str2[i] != '\0'; i++)
        str2[i] = tolower(str2[i]);
    
    printf("tolower: %s\n", str2);
    
    for(i = 0;str2[i] != '\0'; i++)
        str2[i] = STR1[i];
    printf("back:\n %s\n", str2);
    
    for(i = 0;str2[i] != '\0'; i++)
        str2[i] = ft_tolower(str2[i]);
    
    printf("ft_tolower: %s\n", str2);
    
    
	return 0;
}
