#include <cs50.h>
#include <stdio.h>

//Prototype
int get_first_score(void);
int get_second_score(void);
int get_third_score(void);


int main(void)
{
    // get exam scores
    int s1 = get_first_score();
    int s2 = get_second_score();
    int s3 = get_third_score();

    printf("Your average score is %f\n", (s1+s2+s3)/3.0);

}

int get_first_score(void)
{
    //get first exam score of the user

    int score1 = get_int("What's your first exam score?: "); // each int uses 4 byte space

    return score1;
}

int get_second_score(void)
{
    //get second exam score of the user

    int score2 = get_int("What's your second exam score?: "); // each int uses 4 byte space

    return score2;
}

int get_third_score(void)
{
    //get third exam score of the user

    int score3 = get_int("What's your third exam score?: "); // each int uses 4 byte space

    return score3;
}