//
// 
//Rudra Patel
//Supplemental Assignment
//Bachlores of computer_science (Section-2)
//PROG71985-22F-Sec2-Programming Principles
//
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"Deleting_The_Seat.h"                         //useing and merging every header files to use all functions 
#include"Displaying_List_Of_Empty_Seats.h"
#include"Displaying_The_Customer_List.h"
#include"Menu.h"
#include"Reserving_Seat.h"
#include"Show_Number_Of_Empty_Seats.h"
#include"Total_Income.h"


#define FIRST_NAME 20   //predefining the strings

#define LAST_NAME 20

#define MAXIMUM_SEATS 20

#define MOVIE 1

#pragma warning(disable:4996)

struct Movie_Seat   //structure for movie seats
{
    int Number;

    int Is_Reserved;

    char First_Name_Of_Customer[FIRST_NAME];

    char Last_Name_Of_Customer[FIRST_NAME];
};


void File_Reading(struct Movie_Seat* ms);

void Initial(struct Movie_Seat* ms);		

void File_Writing(struct Movie_Seat* ms);

char* Getting_The_String(char* string, int number);			


int Is_Configuration;

char Movie_Number[MOVIE];

int main(void)
{
    char Character;

    int Movie;

    struct Movie_Seat Customer[MAXIMUM_SEATS];

    Initial(Customer);

    File_Reading(Customer);

   
        Is_Configuration = 0;

        while ((Character = Menu()) != 'f')  //while loop for the main menu function
        {
            switch (Character)
            {
            case 'a': Displaying_List_Of_Empty_Seats(Customer);

                break;

            case 'b': Displaying_The_Customer_List(Customer);

                break;

            case 'c': Reserving_Seat(Customer);

                break;

            case 'd': Deleting_The_Seat(Customer);

                break;

            case'e':Total_Income(Customer);

                break;

                case'f':

                    break;

            default: printf("Invalid input.\n");

                break;
            }
        }
       
        if (Is_Configuration)

            File_Writing(Customer);
 


    return 0;
}

void Initial(struct Movie_Seat* ms)
{
    int i;

    for (i = 0; i < MAXIMUM_SEATS; i++)
    {
        ms[i].Number = i + 1;

        ms[i].Is_Reserved = 0;

        strcpy(ms[i].First_Name_Of_Customer, "");

        strcpy(ms[i].Last_Name_Of_Customer, "");
    }
}

void File_Reading(struct Movie_Seat* ms)
{
    FILE* fp;


    if ((fp = fopen("seat.txt", "a+b")) == NULL)
    {
        fprintf(stderr, "Can't open seat.txt.\n");

        exit(EXIT_FAILURE);
    }
    fread(ms, sizeof(struct Movie_Seat), MAXIMUM_SEATS, fp);
}



void Seat_Is_Confirmed(void)
{
    Is_Configuration = 1;

    printf("The seat is reserved\n");
}

void File_Writing(struct Movie_Seat* ps)
{
    FILE* fp;

    fp = fopen("seat.txt", "w+b");

    fwrite(ps, sizeof(struct Movie_Seat), MAXIMUM_SEATS, fp);

    fclose(fp);
}

char* Getting_The_String(char* string, int number)
{
    char* Return_Value;

    char* Looking;

    Return_Value = fgets(string, number, stdin);

    if (Return_Value)
    {
        Looking = strchr(string, '\n');

        if (Looking)

            *Looking = '\0';

        else

            while (getchar() != '\n')

                continue;
    }

    return Return_Value;
}