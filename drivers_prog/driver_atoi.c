#include<stdlib.h>
#include<stdio.h>
#include "libft.h"

int	main(void)
{
	char a[25] = "    -00123";
    char s[25] = "";
    char d[25] = "\t\n  \v\f\r  12345";
    char f[25] = "-2147483648";
    char g[25] = "2345";
    char h[25] = "25f85";
    char j[25] = "-0066";
    char k[25] = "0066";
    char l[25] = "0";
    char q[25] = "-2147483649";
    
    
    int w;

	printf("%s  %d\n", a, w= ft_atoi(a));
    printf("%s  %d\n", s, w= ft_atoi(s));
    printf("%s  %d\n", d, w= ft_atoi(d));
    printf("%s  %d\n", f, w= ft_atoi(f));
    printf("%s  %d\n", g, w= ft_atoi(g));
    printf("%s  %d\n", h, w= ft_atoi(h));
    printf("%s  %d\n", j, w= ft_atoi(j));
    printf("%s  %d\n", k, w= ft_atoi(k));
    printf("%s  %d\n", l, w= ft_atoi(l));
    printf("%s  %d\n", q, w= ft_atoi(q));

  return 0;
}
