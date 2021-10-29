#include <stdio.h>
size_t ft_strlcat (char *dst, const char *src, size_t n)
{
    char *sr;
    char *ds;
    sr = (char *) src;
    ds = (char *) dst;
    int i;

    i = 0;
    
    while (i != n-1)
    {
    if (*ds == '\0')
    {
        *ds = *sr;
        ds++;
        sr++;
        i++;
    }
    else
    {
      ds++;
      i++;
    }
    }
    
    *ds = '\0';
    return(n);


}