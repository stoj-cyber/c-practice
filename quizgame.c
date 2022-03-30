 #include <stdio.h>
 #include <ctype.h>

 int main()
{
    char questions[][100] = {"1. Which year c language launged globelly ?",
                             "2. Who is founded c language ?",
                             "3. What is the predecessor of C ?"};

    char options[][100] = {"A. 1970", "B. 1972", "C. 1962", "D. 1964",
                           "A. Dennis Ritchie","B. Nichole Tesle","C. Martin Richards","D. Ken Thomson",
                           "A. BCPL","B. B","C. Objective C","D. c++"};
    char answers[3] = {'B','A','B'};
    int numberOfQustions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    printf("QUIZ GAME\n");
    
    for (int i = 0; i < numberOfQustions; i++)
    {
        printf("----------------------\n");
        printf("%s\n",questions[i]);  // Display all qustions
        printf("----------------------\n");
        for (int j = (i * 4); j < (i * 4) + 4; j++) // Display all options
        {
            printf("%s\n",options[j]);
        }
        printf("Enter a currect option : ");
        scanf("%c",&guess);
        scanf("%c"); // clear \n from input buffer
        guess = toupper(guess);
        
        if (guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("ANSWER IS WRONG :(\n");
        }
         
    }
    printf("--------------------\n");
    printf("SCORE : %d/%d\n",score,numberOfQustions);
    printf("--------------------");
    /*
    problems -
    1. if statement (all right answers are worngly displayed)
    2. score is oblicated
    */
    return 0;
}