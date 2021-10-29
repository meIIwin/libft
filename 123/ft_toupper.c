#include <unistd.h>
int ft_toupper(int a)
{
    if (a <= 122 & a >= 97)
    {
        a -= 32;
        return(a);
    }
    else
        return(0);
}