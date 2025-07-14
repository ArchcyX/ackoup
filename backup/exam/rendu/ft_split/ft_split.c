#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **arr = malloc(sizeof(char)*1000);

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i])
    {
        if (str[i] > 32)
        {
            arr[j] = malloc(sizeof(char) * 1000);
            k = 0;
            while (str[i] > 32)
                arr[j][k++] = str[i++];
            arr[j][k] = 0;
            j++;
        }
        else
            i++;
    }
    return (arr);
}