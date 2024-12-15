#include<stdio.h>
#include"Displaying_The_Customer_List.h"
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

void Displaying_The_Customer_List(struct Movie_Seat* ms)
{
    int i;

    for (i = 0; i < MAXIMUM_SEATS; i++)
    {
        printf("%d %s %s\n", ms[i].Number, ms[i].First_Name_Of_Customer, ms[i].Last_Name_Of_Customer);
    }

}