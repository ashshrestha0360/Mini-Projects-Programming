#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number;
    srand(time(0));
    number = rand() % 10; //generates random number between 1 and 10
    printf("The random number is %d", number);
    return 0;
}