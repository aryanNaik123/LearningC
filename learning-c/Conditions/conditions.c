#include <stdio.h>

void guessNumber(int guess)
{
    // TODO: write your code here
    // if guess is 555 - Correct
    // if less than
    // if greater tahn
    if (guess == 555)
    {
        printf("Correct. You guessed it!\n");
    }
    else if (guess > 555)
    {
        printf("Your guess is too high.\n");
    }
    else if (guess < 555)
    {
        printf("Your guess is too low.\n");
    }
}

int main()
{
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
