/**
 * @file 04_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-16
 * 
 * @problem statement :- Accept two numbers from the user and display first number in
 *                       second number of times
 * 
 */

#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    int iCnt =0;
    if(iFrequency<0)
    {
        iFrequency = -(iFrequency);
    }
    for(iCnt = 0; iCnt<iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number :-\n");
    scanf("%d",&iValue);

    printf("Enter frequency :-\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}