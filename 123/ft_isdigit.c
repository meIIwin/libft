#include <unistd.h>
int ft_isdigit(int a)
{
    if (a <= 57 & a >= 48)
        return (a);
    else
        return (0);
}