#include <stdio.h>
char *ft_strrchr(char *a, int b)
{
    int i;
    
    i = 0;
    while (a[i] != '\0')
        i++;

    char *str;
    str = (char *) a;
    while(i >= 0)
    {
        if (str[i] == b)
            return (&str[i]);
        i--;
    }
    return(0);
}