#include <stdio.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *ds;
    char *sr;
    int i = 0;
    ds = (char *) dst;
    sr = (char *) src;
    while (i!=n)
    {
        ds[i]=sr[i];
        i++;
    }
    return(ds);
}
