#include <stdio.h>
size_t ft_strlcpy (char *dst, const char *src, size_t n)
{
    char *sr;
    char *ds;
    sr = (char *) src;
    ds = (char *) dst;
    int i;

    i = 0;
    while (i != n-1)
    {
        *ds = *sr;
        ds++;
        sr++;
        i++;
    }
    *ds = '\0';
    return(n);


}