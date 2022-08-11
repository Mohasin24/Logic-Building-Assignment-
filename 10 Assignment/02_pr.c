/**
 * @file 02_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-08-06
 *
 * @problem statement :- Accept N number from user and accept one another number as NO and return index of first occurance of that Number
 *
 */

#include <stdio.h>

void acceptNum(int [], int);
void checkNum(int [], int, int);

int main()
{
    int iNum = 0;
    int NO = 0;

    printf("Enter number :=  ");
    scanf("%d", &iNum);

    int Arr[iNum];

    acceptNum(Arr, iNum);

    printf("Enter a number to find :=  ");
    scanf("%d", &NO);

    checkNum(Arr, iNum, NO);

    return 0;
}

void acceptNum(int Arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("Enter no. %d :=  ", (i + 1));
        scanf("%d", &Arr[i]);
    }
    // system("cls");
}

void checkNum(int Arr[], int len, int F)
{   
    int check = 0;
    for (int i = 0; i < len; i++)
    {
        if (Arr[i] == F)
        {
            check = 1;
            printf("Index of first occurance of %d is %d.\n",F,(i));
        }
    }

    if (check == 0 )
    {
        printf("Number %d is not present.\n", F);
    }
}
