/**
 * @file 02_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-14
 * 
 * @problem statement :- Print 5 times your name on the screen
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
    for (int i = 1; i <= 5; i++)
    {
        printf("Mohasin\n");
    }
}