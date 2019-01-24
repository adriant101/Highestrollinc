/*Program Author: Adrian Ashwah
Student Number: 814934
Course: CSCI 205
Highest Roll of 5 Dice */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Declaring Name Variables and total
char firstName[20];
char lastName[20];
int totalRoll;
int array[4];
int max;
int min;
int i;

//Main method
int main(void) {
    srand(time(0));
    //Generate rand between 1-6 inclusive
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int die3 = rand() % 6 + 1;
    int die4 = rand() % 6 + 1;
    int die5 = rand() % 6 + 1;
    printf("Please enter your first and last name:\n");
    //Gather user name
    scanf("%s", firstName);
    scanf(" %s", lastName);
    
    printf("Hello %s %s! You rolled:\n", firstName, lastName);
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Die 3: %d\n", die3);
    printf("Die 4: %d\n", die4);
    printf("Die 5: %d\n", die5);
    
    //total rolls
    totalRoll = die1 + die2 + die3 + die4 + die5;
    printf("The total of your 5 die is: %d\n", totalRoll);
    
    //Max and Min rolls
    
    
    array[0] = die1;
    array[1] = die2;
    array[2] = die3;
    array[3] = die4;
    array[4] = die5;
    min = array[0];
    //Loop for max roll
    for (i =0; i <5; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    //Loop for min roll
    for (i = 0; i < 5 ; i++){
        if (array[i] < min){
            min = array[i];
        }
    }
    printf("The maximum die is: %d\n", max);
    printf("The minimum die is: %d\n", min);
    
    return 0;
}