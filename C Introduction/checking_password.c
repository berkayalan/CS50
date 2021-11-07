#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int password = get_int("Create your 4 digit password:\n ");

    for (int i=0 ; i<4 ; i++)
    {
        int repassword = get_int("Re-Enter your password to check. You have 3 rights!\n");

        if (repassword!=password)
        {
            printf("You entered your password wrong! Please try again.\n");
        }
        else if (repassword==password)
        {
            printf("Your password is created!\n");
        }
        else
        {
            printf("Your account is blocked!\n")
        }

    }

}