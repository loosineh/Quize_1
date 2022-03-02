#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max = 10;
void menue()
{
    printf("Press 1 to play a game \n");
    printf("Press 2 to change the max number \n");
    printf("Press 3 to quit \n");
    printf("Please make a selection: \n");
}
int main()
{
    int choice = 0;
    int number;
    int random;
    int setMax;
    int count = 0;
    while(choice != 3)
    {
        menue();
        scanf("%d", &choice);
        if(choice == 1)
        {
            srand(time(0));
            random = (rand() % (max - 0 + 1)) + 0;
            while(random != number)
            {
                printf("Guess a number between 0 to %d :", max);
                scanf("%d", &number);
                if(number > random)
                {
                    printf("The number you have guess is too high\n\n");
                    count++;
                }
                else if(number < random)
                {
                    printf("The number you have guess is too low\n\n");
                    count++;
                }
                else if(number == random)
                {
                    printf("You Won! \n\n");
                    count++;
                }
            }
        }
        else if(choice == 2)
        {
            printf("Enter a number you want to be max: \n");
            scanf("%d", &setMax);
            while(setMax < 0 || setMax > 10)
            {
                printf("Invalid! Enter a number you want to be max: \n");
                scanf("%d", &setMax);
            }
        }
        else if(choice == 3)
        {
            printf("Thank you for playing this game! \n");
            printf("The number of guesses required to win: %d\n", count);
            printf("You have set final maximum value = %d\n", setMax);
            return 0;
        }
    }
    return 0;
}