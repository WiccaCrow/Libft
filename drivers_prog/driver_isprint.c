#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	main(void)
{
	int		i;
	char	str[] = " 12$. 9 (tEn) o'clock. 0123456789";
    int     j;
    
	for(i = 0;str[i] != '\0'; i++)
		printf("%5c   isprint: %d\n     ft_isprint: %d\n\n", str[i], isprint(str[i]), ft_isprint(str[i]));
    
    for (j = 126; j < 130; j++)
    printf("%5d   isprint: %d\n     ft_isprint: %d\n\n", j, isprint(j), ft_isprint(j));

	return 0;
}
