#include <unistd.h>
int ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
    unsigned char *ms1;
    unsigned char *ms2;
    ms1 = (unsigned char *) arr1;
    ms2 = (unsigned char *) arr2;
    int i=0;
    while ((i!=n) & (*ms1 == *ms2))
    {
        ms1++;
        ms2++;
        i++;
    }
    if (*ms1>*ms2)
        return(1);
    else if (*ms1<*ms2) 
        return(-1);
    else
        return(0);
}