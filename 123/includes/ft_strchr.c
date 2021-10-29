#include <stdio.h>
char *ft_strchr(char *a, int b)
{
    char *str;

    str = (char *) a;
    while (*str != b)
    {
        if (*str == '\0')
            return(0);
        str++;
    }
    return (str);
    
}