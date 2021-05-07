#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int    ft_strlen(const char *s)
{
    int    i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char        *ft_strdup(const char *s1)
{
    char    *c_copy;
    int        len;

    len = ft_strlen(s1);
    if ((c_copy = malloc((len + 1) * sizeof(char))) == 0)
        return (NULL);
    c_copy[len] = 0;
    while (len--)
    {
        c_copy[len] = s1[len];
    }
    return (c_copy);
}


int main()
{
    char *s1 = "hello world";
    char *s2;
    char *s3;

    s3 = strdup(s1);
    printf("%s\n", s3);
    
    s2 = ft_strdup(s1);
    printf("%s\n", s2);
    return 0;
}
