#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random,guess;
    int counter=0;
    srand(time(NULL));
    random=rand()%100+1;
    printf("\nWelcome to the world of Guessing Number\n");
    do{
        printf("\nGuess a number(1-100):");
        scanf("%d",&guess);
        counter++;
        if(guess>random){
            printf("Guess a smaller number\n");
        }
        else if(guess<random){
            printf("Guess a larger number\n");
        }
        else{
            printf("You have Successfully Guessed the number in %d attempts\n",counter);
        }
        }while(guess!=random);
    printf("Bye Bye\nThanks For Playing\n");
    printf("Developed By : Imran Ali\n");
    }
