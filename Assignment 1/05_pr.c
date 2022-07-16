/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-14
 * 
 * @problem statement :- Accept a numbe and print that number of * on screen
 * 
 */

#include<stdio.h>
void Display(int);
int main()
{

    int iVal = 0;
    printf("Enter the number:-\n");
    scanf("%d",&iVal);

    Display(iVal);

    return 0;
}

void Display(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("*\n");
    }
    
}