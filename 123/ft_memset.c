#include <stdio.h>
void *ft_memset(void *a, int b, size_t count)
{
    char *c;
    int i;
    c = (char *) a;
    i = 0;
    while(i != count)
    { 
        c[i] = b;
        i++;
    }
    return (a);
}