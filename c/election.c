#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int votesZero = 0;
    int votesOne = 0;
    int selection = 0;
    while (selection != 2){
        printf("Party one or Zero? ");
        scanf("%d", &selection);
        if (selection == 0){
            votesZero += 1;
            system("clear");
        }
        else if (selection == 1){
            votesOne += 1;
            system("clear");
        }
        else{
            printf("Invalid!\n");
        }
    }
    system("clear");
    printf("Party one: %d\nParty Zero: %d\n", votesOne, votesZero);
    if (votesZero > votesOne){
        printf("Party Zero won!\n");
    }
    else if (votesOne != votesZero){
        printf("Party One won!\n");
    }
    else{printf("It's a draw!\n");};
    
    return 0;
}