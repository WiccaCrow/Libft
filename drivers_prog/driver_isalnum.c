#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	main(void)
{
	int		i;
	char	str[] = " 12$. 9 (tEn) o'clock. 0123456789";
	
	for(i = 0;str[i] != '\0'; i++)
		printf("%c isalnum back %d and %d back ft_isalnum\n", str[i], isalnum(str[i]), ft_isalnum(str[i]));
	return 0;
}
