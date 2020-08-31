#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    // inputs which will be used in our code. The Input is the total amount of change, cents is the total amount of cents rouded up.
    float input;
    int cents;

    // This command will be used to force the user to insert a positive value that is greater than 0.
    do
    {
        input = get_float("What is your input?\n");

    }
    while (input < 0);

    // This is to round up the number of cents so that there is no problems with the calculations.
    cents = round(input * 100);

    // counter used to count how many coins we will be using.
    int counter = 0;

    // This line is here to ensure that the operation is repeated as long as value of cents is above 0.
    while (cents > 0)
    {
        // To calculate how many coins of 25 we will use.
        
        if (cents >= 25)
        {
            cents = cents - 25;
            counter++;
        }
        // To calculate how many coins of 10 we will use.
         
        else if (cents >= 10)
        {
            cents = cents - 10;
            counter++;
        }
        // To calculate how many coins of 5 we will use.
         
        else if (cents >= 5)
        {
            cents = cents - 5;
            counter++;
        }
        // To calculate how many coins of 1 we will use.
         
        else if (cents >= 1)
        {
            cents = cents - 1;
            counter++;
        }
    }
   
    printf("Your change is: %i coins.\n", counter);
}
