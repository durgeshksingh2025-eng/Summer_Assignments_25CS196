#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("Q2. Which language is used to write C programs?\n");
    printf("1. English\n2. Hindi\n3. C Language\n4. Python\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C Language.\n\n");
    }

    // Question 3
    printf("Q3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 7.\n\n");
    }

    // Question 4
    printf("Q4. Which symbol is used for comments in C (single line)?\n");
    printf("1. //\n2. ##\n3. **\n4. &&\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is //\n\n");
    }

    // Question 5
    printf("Q5. Which function is used to print output in C?\n");
    printf("1. scanf()\n2. printf()\n3. gets()\n4. strlen()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is printf().\n\n");
    }

    printf("===== QUIZ COMPLETED =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}