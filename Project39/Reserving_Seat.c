#include<stdio.h>
#include"Reserving_Seat.h"
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


void Reserving_Seat(struct Movie_Seat* ms)
{
    int number;

    int Return_Value;

    printf("Please enter the number of seat you want to book (1 to 20) \n");

    while ((Return_Value = scanf_s("%d", &number)) != 1 || number < 1 || number > 20 || ms[number - 1].Is_Reserved == 1)
    {
        if (Return_Value != 1 || number < 1 || number > 20)

            printf("Sorry, please input a integer from 1 to 20.\n");

        else
            printf("Sorry, the seat is reserved, please reselect any other seat:\n");

        while (getchar() != '\n')

            continue;
    }
    while (getchar() != '\n')

        continue;

    printf("Please enter customer's firstname:\n");

    Getting_The_String(ms[number - 1].First_Name_Of_Customer, FIRST_NAME);

    printf("Please enter customers's lastname:\n");

    Getting_The_String(ms[number - 1].Last_Name_Of_Customer, LAST_NAME);

    ms[number - 1].Is_Reserved = 1;


}