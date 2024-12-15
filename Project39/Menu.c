//
//
// 
//Rudra Patel
//Supplemental Assignment
//Bachlores of computer_science (Section-2)
//PROG71985-22F-Sec2-Programming Principles
//
//
#include<stdio.h>
#include"Menu.h"

char Menu(void)
{
    char ch;
    printf("----------------------------------------------------------------------------------------------\n");
    printf("To select the following functionality, enter its letter label :\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("a) Show number of empty (unreserved) seats\n");
    printf("                        -                                                                     \n");
    printf("b) Show alphabetical listing of guests / customers who have booked a seat\n");
    printf("                        -                                                                     \n");
    printf("c) Reserve a seat for a guest / customer\n");
    printf("                        -                                                                     \n");
    printf("d) Delete a seat reservation\n");
    printf("                        -                                                                     \n");
    printf("e) Print total nightly theatre income\n");
    printf("                        -                                                                     \n");
    printf("f) Quit\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------\n");

    while ((ch = getchar()) < 'a' || ch > 'f')
    {
        while (getchar() != '\n')

            continue;

        printf("Sorry, You have entered aa wrong alphabet. Please enter the right label\n");
    }
    while (getchar() != '\n')

        continue;

    return ch;
}