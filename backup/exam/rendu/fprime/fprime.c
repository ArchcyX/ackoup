#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 2;
    int nbr = 0;
    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        if (nbr == 1)
            printf("1");
        while (i <= nbr)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                nbr /= i;
                if (i <= nbr)
                    printf("*");
                
                i = 2;
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}