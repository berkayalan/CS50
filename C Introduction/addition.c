#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get integers from a user and sum them
    int x = get_int("First Number: ");

    int y = get_int("Second Number: ");

    printf("Sum of these Numbers are : %i\n", x+y);

}