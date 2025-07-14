#include <stdlib.h>

int count(int nbr)
{
    int result = 0;

    if (nbr < 0)
    {
        result++;
        nbr = -nbr;
    }
    if (nbr == 0)
        return (1);
    while (nbr > 0)
    {
        nbr /= 10;
        result++;
    }
    return (result);
}

char    *ft_itoa(int nbr)
{
    int len = count(nbr);
    char *str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    len--;
    if (nbr == 0)
        return ("0");
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while (nbr > 0)
    {
        str[len] = (nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    return (str);
}