#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char t='\n';

int main(int argc, char **argv)
{
    const char *largestring = "12 456 8Baz";
    const char *smallstring = "456";
    char *ptr;

    int len;

    len = atoi(argv[1]);

    ptr = strnstr(largestring, smallstring, len);

    printf("%d%c %s %c %s %c %s %c%c", len, t, largestring, t, smallstring, t, ptr, t, t);

    // all for my function

    ptr = ft_strnstr(largestring, smallstring, len);

    printf("%d%c %s %c %s %c %s %c%c", len, t, largestring, t, smallstring, t, ptr, t, t);


    return 0;
}