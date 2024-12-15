#include<stdio.h>
#include"Total_Income.h"
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


void Total_Income(struct Movie_Seat* ms)
{
    int i;

    int Number_Counter = 0;

    for (i = 0; i < MAXIMUM_SEATS; i++)
    {
        if (ms[i].Is_Reserved == 0)

            Number_Counter++;
    }
   

    int Seats = 20 - Number_Counter;

    double Total_Price = Seats * 17.5;

    printf("The total income : %lf dollars\n ", Total_Price);
   
   
}