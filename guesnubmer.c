#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    // use current time as a seed
    srand(time(0));
    // genarating a random number
    answer = (rand() % MAX) + MIN;
    
    do
    {
        printf("Enter a guess : ");
        scanf("%d",&guess);
        if (guess > answer)
        {
           printf("Guess is too high !!\n");
        }
        else if(guess < answer)
        {
            printf("Guess is too low !!\n");
        }
        else
        {
            printf("CORRECT ANSWER!!\n");
        }
        guesses ++;  
    } while (guess != answer);

    printf("|------------------|\n");
    printf("ANWER \t:  %d\n",answer);
    printf("GUESSES :  %d\n",guesses);
    printf("|------------------|\n");
    return 0;
}