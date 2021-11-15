#include <cs50.h>
#include <stdio.h>
#include <string.h>


typedef struct // creating new datatype
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "Josh";
    people[0].number = "+90-566-78-90";

    people[1].name = "Flory";
    people[1].number = "+1-987-808-90";

    people[2].name = "Bill";
    people[2].number = "+98-909-16-88";

    people[3].name = "Berkay";
    people[3].number = "+68-718-90-808";

    string search_name = get_string("Enter who yo're looking for: ");

    for (int i=0 ; i<4 ; i++)
    {
        if (strcmp(people[i].name,search_name)==0) // It looks ig the value is equal
        {
            printf("Found: %s\n",people[i].number);
            return 0;
        }

    }
    printf("Not found!\n");
    return 1;

}