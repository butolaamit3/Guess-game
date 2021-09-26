#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,guess,n_guess=1;
    srand(time(0));
    num = rand()%100+1; // to generate the random no. between 1 to 100
    printf("The number is %d\n", num);
    do {
        printf("Guess a number between 1 to 100 :");
        scanf("%d", &guess);
        if ( guess> num){
            printf("Please enter the lower number\n");
        }
        else if(guess<num) {
            printf("Please enter the higher number\n");
        }
        else{
            printf("Congrats! you gussed it in %d attempts",n_guess);
        }
        n_guess++;


    }while(guess!=num);

    return 0;
}