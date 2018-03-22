#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;

    do
    {
        height = get_int("Height:");
    }
    while (height < 0 ||height > 23);

    for (int row = 0; row < height; row++)
    {
        for (int space = height - 1; space > row; space--)
        {
            printf(" ");
        }


        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }

        for (int space = height - 1; space > 0; space--)
        {
            printf(" ");
        }

        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }

        printf("\n");
    }
}
