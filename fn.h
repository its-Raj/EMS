#ifndef fn_H
#define fn_H

#include <stdio.h>

void invaild_input()
{
    printf("\n\t\t\t\tINVALID INPUT !");
    printf("\n\t\t\t\tPress Enter to try again.");
    fflush(stdin);
    getchar();
}

void templet()
{
    fflush(stdin);
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t\t************************************************************************\n");
    printf("\t\t\t\t*********                                                       ********\n");
    printf("\t\t\t\t*********                Employee Management System             ********\n");
    printf("\t\t\t\t*********                                                       ********\n");
    printf("\t\t\t\t************************************************************************\n");
    printf("\n");
}

void go_back()
{
    printf("\n\n\n\t\t\t\tPress Enter to go to main menu.....");
    fflush(stdin);
    getchar();

    system("cls");
}

#endif