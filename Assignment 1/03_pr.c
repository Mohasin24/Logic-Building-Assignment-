/**
 * @file 03_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-14
 * 
 * @problem statement :- Program to print 5 to 1 numbers
 * 
 */

#include<stdio.h>

void Display();
int main()
{
    Display();
    
    return 0;
}

void Display()
{
    for (int i = 5; i >= 1; i--)
    {
        printf("%d\n",i);
    }
}