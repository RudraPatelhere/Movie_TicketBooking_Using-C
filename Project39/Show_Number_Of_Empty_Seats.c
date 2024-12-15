#include<stdio.h>
#include"Show_Number_Of_Empty_Seats.h"
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





void Show_Number_Of_Empty_Seats(struct Movie_Seat* ms)
{
    int i;

    int Counter = 0;

    for (i = 0; i < MAXIMUM_SEATS; i++)
    {
        if (ms[i].Is_Reserved == 0)

            Counter++;
    }
    printf("The number of empty seats in the theatre is %d\n", Counter);
}
