#include <stdio.h>
#include <cs50.h>

void print_char (char* c, int n);

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
        print_char(" ", height-1-row);

        print_char("##", row+1);

        printf("\n");
    }
}

// print char n times
void print_char (char* c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s", c);
    }
}
