#include <stdio.h>
int main()
{

    for (int i = 1; i <= 4; i++)
    {
        int z = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d", z);
                j < 4 ? z++ : z--;
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}