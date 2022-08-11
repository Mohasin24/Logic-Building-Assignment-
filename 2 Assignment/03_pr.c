/**
 * @file 03_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-16
 * 
 * @problem statement :- Accept one number from the user if number is less than 10 print
 *                       "Hello" otherwise print "Demo"
 * 
 */

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}