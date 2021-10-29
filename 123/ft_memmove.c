#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dst;
    unsigned char *sr;
    int i;
    
    dst = (unsigned char *) dest;
    sr = (unsigned char *) src;
    i = 0;
    while (i != n)
    {
        dst[n-1] = sr[n-1];
        n--;
    }
    return(dst);
}