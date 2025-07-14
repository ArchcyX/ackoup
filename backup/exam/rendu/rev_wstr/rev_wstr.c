#include <stdlib.h>
#include <unistd.h>

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **arr = malloc(1000);

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i])
    {
        if (str[i] > 32)
        {
            arr[j] = malloc(1000);
            k = 0;
            while (str[i] > 32)
                arr[j][k++] = str[i++];
            arr[j][k] = 0;
            j++;
        }
        else
            i++;
    }
    arr[j] = NULL;
    return (arr);
}

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char **argv)
{
    char **str;
    int i = 0;
    if (argc == 2)
    {
        str = ft_split(argv[1]);
        while (str[i] != NULL)
            i++;
        i--;
        while (i >= 0)
        {
            ft_putstr(str[i--]);
            if (i >= 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}