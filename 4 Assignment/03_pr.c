/**
 * @file 03_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @problem statement :- Write a program which accepts number from the user and display its non factors
 *
 */

#include <stdio.h>

void DisplayNonFact(int);

int main()
{
    int iVal = 0;
    printf("Enter the number :-\n");
    scanf("%d", &iVal);
    DisplayNonFact(iVal);
    return 0;
}

void DisplayNonFact(int iNum)
{
    for (int i = 1; i < iNum; i++)
    {
        if (iNum % i != 0)
        {
            printf("%d ", i);
        }
    }
}