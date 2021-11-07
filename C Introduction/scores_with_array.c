#include <cs50.h>
#include <stdio.h>


const int total_exam = 3 ;  // Now we are creating a constant

//Prototype

int get_scores(void);
float average(int length, int array[]);

int main(void)
{
     //get exam scores of the user

    int scores[total_exam];

    for (int i=0;i< total_exam; i++)
    {
        scores[i] =  get_scores();
    }

    printf("Your average score is %f\n", average(total_exam, scores) );

}

// create an function to get exam scores of the user

int get_scores(void)
{
    int score=  get_int("What's your exam score?: "); // each int uses 4 byte space
    if (score>100)
    {
        printf("Please enter your right score! It should be between 0 and 100.\n");
        score=  get_int("What's your exam score?: "); // each int uses 4 byte space
    }

    return score;
}

// create an function to calculate average

float average(int length, int array[])
{
    int sum=0;

    for (int i=0 ; i<length; i++)
    {
        sum = sum+array[i];
    }

    return sum / (float) length ;
}
