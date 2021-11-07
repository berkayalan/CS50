#include <stdio.h> //input standart input output library
#include <cs50.h> //importing cs50 library

//details are here: https://cs50.readthedocs.io/libraries/cs50/c/

int main(void) //This executes programm
{
    string name = get_string("What's your name?");
    printf("Hello %s",name);

    int age = get_int("\nWhat's your age?");
    printf("You are %i",age);

    string city = get_string("\nWhere do you live?");
    printf("You live in %s",city);

    string gender = get_string("\nWhat's your gender?");
    printf("You identify yourself as a %s",gender);
}