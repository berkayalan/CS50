#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int width = get_int("Enter the width: ");
    int height = get_int("Enter the height: ");

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}