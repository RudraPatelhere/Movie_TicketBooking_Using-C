#include<stdio.h>
#include"Deleting_The_Seat.h"
#define FIRST_NAME 20 

#define LAST_NAME 20

#define MAXIMUM_SEATS 20

#define MOVIE 1


struct Movie_Seat
{
    int Number;

    int Is_Reserved;

    char First_Name_Of_Customer[FIRST_NAME];

    char Last_Name_Of_Customer[FIRST_NAME];
};
void Deleting_The_Seat(struct Movie_Seat* ms)
{
    int number;

    printf("Please input the number of seat you want to delete (1 to 20) ");

    while (scanf_s("%d", &number) != 1 || number < 1 || number > 20 || ms[number - 1].Is_Reserved == 0)
    {
        if (ms[number - 1].Is_Reserved == 1)

            printf("Sorry, the seat is empty, please reselect any other seat:\n");

        else

            printf("Sorry, please input a integer from 1 to 20\n");

        while (getchar() != '\n')

            continue;
    }
    getchar();

    strcpy(ms[number - 1].First_Name_Of_Customer, "");

    strcpy(ms[number - 1].Last_Name_Of_Customer, "");

    ms[number - 1].Is_Reserved = 0;

    printf("OK.\n");
}