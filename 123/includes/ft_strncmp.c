#include <unistd.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i=0;
    while ((i!=n) & (*s1 == *s2))
    {
        s1++;
        s2++;
        i++;
    }
    if ((*s1>*s2) || (*s2 == '\0'))
        return(1);
    else if ((*s1<*s2) || (*s1 == '\0')) 
        return(-1);
    else
        return(0);
}