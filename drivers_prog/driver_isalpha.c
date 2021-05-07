#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	main(void)
{
	int		i;
	char	str[] = "I love PIZZA. It cost 2$";
	
	for(i = 0;str[i] != '\0'; i++)
		printf("%c isalpha back %d and %d back ft_isalpha\n", str[i], isalpha(str[i]), ft_isalpha(str[i]));
	return 0;
}
