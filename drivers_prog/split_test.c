
int main()
{
    char **splitstr;
    char s[] = "      split       this for   me  !       ";
    char c = ' ';
    
 //   int *i = ft_len_str(s, c);
    splitstr = ft_split(s, c);
    int i = 5;
    while (i-- > 0)
        printf("%s\n", *splitstr++);
    return 0;
}
