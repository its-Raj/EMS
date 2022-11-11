#include <stdio.h>
#include <stdlib.h>

#include "D:\DSA\Project_DSU\Linked_list.h"
#include "D:\DSA\Project_DSU\fn.h"

void EMS();
void goto_main();
void chk_x(int x);

int main()
{
    create_ll();
    EMS();
    return 0;
}

void EMS()
{
    int choice, x;

    system("cls");
    templet();

    printf("\n\t\t\t\t1.Insert ");
    printf("\n\t\t\t\t2.Search ");
    printf("\n\t\t\t\t3.Display (Department Wise) ");
    printf("\n\t\t\t\t4.Display all  ");
    printf("\n\t\t\t\t5.Exit");

    printf("\n\n\t\t\t\tEnter Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        x = insert();
        chk_x(x);
        break;

    case 2:
        search();
        break;

    case 3:
        display_dept();
        break;

    case 4:
        display_all();
        break;

    case 5:
        printf("\n\t\t\t\tSee you Soon :) ");
        exit;
        break;

    default:
        invaild_input();
        EMS();
        break;
    }

    if (choice != 5 && choice < 5)
        EMS();
}

void chk_x(int x)
{
    if (x == 0)
        EMS();
}