#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get integers from a user and sum them
    int x = get_int("First Number: ");

    int y = get_int("Second Number: ");

    //divide x to y
    float z = (float) x / (float) y;

    printf("%f\n", z);

}