#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Every body looking for something.";
	char	str2[] = "Every body looking for something.";
	int		i = 97
	        ;
	int     j = 5
	        ;

	printf("%s\n\nmemset\n", str1);
	printf("%s\n\n", memset(str1, i, j));
	printf("ft_memset\n");
    printf("%s\n\n", ft_memset(str2, i, j));
	return 0;
}