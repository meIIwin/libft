int ft_isprint(int a)
{
    if (a <= 127 & a >= 32)
        return (a);
    else 
        return (0);
}