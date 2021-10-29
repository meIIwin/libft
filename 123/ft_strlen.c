#include <stdio.h>
int ft_strlen(char *str)   // takge int i bez const
{
    int a;
    
    a = 0;
    while ( str[a] != '\0')
        a++;
    return(a);
}