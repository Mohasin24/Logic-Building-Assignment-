/**
 * @file 01_pr.cpp
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-14
 * 
 * @problem statement :- Program to divide two numbers
 * 
 */

#include<stdio.h>

float Divide(int, int);

int main()
{

    int iNum1 = 25, iNum2 = 5;

    float Ret = 0.0;

    Ret = Divide(iNum1,iNum2);

    printf("Division = %0.2f\n",Ret);

    return 0;
}

float Divide(int n1, int n2)
{
    float Ans = 0.0;
    Ans = n1/n2;
    return Ans;
}

