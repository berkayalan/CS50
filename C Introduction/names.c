#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string names[] = {"Charlie","Jake","Joshua","Krishtine","Mike","Phepe","Sasha"}; //sorted names

    for (int i=0 ; i<7 ; i++)
    {
        if (strcmp(names[i],"JAKE")==0)
        {
            printf("Found!\n");
            return 0;
        }

    }
    printf("Not found!\n");
    return 1;

}