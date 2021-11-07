#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get integers from a user
    int x = get_int("x: ");

    int y = get_int("Y: ");

    //compare x and y

    if  (x>y)
    {
        printf("x is less than y\n");
    }
    else if (x==y)
    {
        printf("x is equal to y\n");
    }
    else
    {
        printf("x is greater than y\n");
    }

}