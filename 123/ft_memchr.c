#include <stdio.h>
void *ft_memchr(const void *arr, int  c, size_t n)
{
   char *str;
    int i = 0;
   str = (char *) arr;
   while (i != n)
    {
        if (*str == c)
            return(str);
        str++;
        i++;
    }
    return(0);
}