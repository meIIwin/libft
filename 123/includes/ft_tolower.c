#include <unistd.h>
int ft_toupper(int a)
{
    if (a <= 90 & a >= 65)
    {
        a += 32;
        return(a);
    }
    else
        return(0);
}
