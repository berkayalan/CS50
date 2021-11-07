#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c =get_char("Do you aggree? ");

    if (c=='y' || c=='Y')
    {
        printf("Aggreed.\n");
    }
    else if (c=='n' || c=='N')
    {
        printf("Not aggreed.\n");
    }
    else
    {
        printf("You are not sure!\n");
    }

}