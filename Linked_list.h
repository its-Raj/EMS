#ifndef linked_H
#define linked_H

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <setjmp.h>

#include "D:\DSA\Project_DSU\fn.h"

typedef struct node
{
    int Dept_no;
    int Emp_no;
    char Emp_name[50];
    float salary;

    struct node *next;
} NODE;

NODE *start = NULL, *temp, *n;

void set_info();
void create_ll();
void search();
void display(), display_all();
int insert();
void insert_beg(), insert_end(), insert_bet();

void set_info()
{
    printf("\n\t\t\t\tEnter Department No. : ");
    scanf("%d", &n->Dept_no);

    printf("\t\t\t\tEnter Employee No.  : ");
    scanf("%d", &n->Emp_no);

    fflush(stdin);

    printf("\t\t\t\tEnter Employee Name  : ");
    gets(n->Emp_name);

    printf("\t\t\t\tEnter Employee Salary : ");
    scanf("%f", &n->salary);
}

void create_ll()
{
    system("cls");
    templet();
    char res = 'y';

    printf("\t\t\t\tEnter Details of Employee : \n");

    while (res == 'y' || res == 'Y')
    {
        n = (NODE *)malloc(sizeof(NODE));

        set_info();

        n->next = NULL;

        if (start == NULL)
            start = temp = n;

        else
        {
            temp->next = n;
            temp = n;
        }

        fflush(stdin);

        printf("\n\t\t\t\tDo you want to continue ? (Y/N) : ");
        scanf("%c", &res);
    }
}

int insert()
{
    int opt;

    templet();

    printf("\n\n\t\t\t\t1.Insert Record at begnning");
    printf("\n\t\t\t\t2.Insert Record at end");
    printf("\n\t\t\t\t3.Insert Record at given position");
    printf("\n\t\t\t\t4.Back");

    printf("\n\t\t\t\tEnter your option : ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        insert_beg();
        break;
    case 2:
        insert_end();
        break;
    case 3:
        insert_bet();
        break;
    case 4:
        return 0;
        break;

    default:
        invaild_input();
        insert();
    }
}

void insert_beg()
{
    n = (NODE *)malloc(sizeof(NODE));

    set_info();

    n->next = NULL;

    n->next = start;
    start = n;
}

void insert_end()
{
    n = (NODE *)malloc(sizeof(NODE));

    set_info();

    n->next = NULL;

    temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void insert_bet()
{
    int loc;

    n = (NODE *)malloc(sizeof(NODE));

    set_info();

    n->next = NULL;

    printf("Enter Location : ");
    scanf("%d", &loc);

    temp = start;

    for (int i = 0; i < loc - 2; i++)
    {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;
}

void search()
{
    int fn;

    system("cls");
    templet();

    printf("\n\t\t\t\tEnter Employee No. to Search : ");
    scanf("%d", &fn);

    temp = start;

    while (temp != NULL)
    {
        if (temp->Emp_no == fn)
            display();

        temp = temp->next;
    }
    go_back();
}

void display()
{
    printf("\n\t\t\t\tDetails of Employee : \n");
    printf("\n\t\t\t\tDepartment No. : %d", temp->Dept_no);
    printf("\n\t\t\t\tEmployee No. : %d", temp->Emp_no);
    printf("\n\t\t\t\tEmployee Name : %s", temp->Emp_name);
    printf("\n\t\t\t\tEmployee Salary : %2.f", temp->salary);
    printf("\n");
}

void display_all()
{
    system("cls");
    templet();

    printf("\n\t\t\t\tDetails of Employee : \n");

    temp = start;

    while (temp != NULL)
    {
        printf("\n\t\t\t\tDepartment No. : %d", temp->Dept_no);
        printf("\n\t\t\t\tEmployee No. : %d", temp->Emp_no);
        printf("\n\t\t\t\tEmployee Name : %s", temp->Emp_name);
        printf("\n\t\t\t\tEmployee Salary : %2.f", temp->salary);
        printf("\n");
        temp = temp->next;
    }
    go_back();
}

#endif