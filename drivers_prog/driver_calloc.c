#include <stdlib.h>
#include "libft.h"

int main()
{
    int *integer;
    int n = 2;
    integer = ft_calloc(n,sizeof(int));

    char *char_char;

    char_char = ft_calloc(n,sizeof(char));
    free(integer);
    free(char_char);
    return 0;
}