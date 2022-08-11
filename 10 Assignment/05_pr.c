/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-08-06
 * 
 * @problem statement :- Accept N number from user and return product of all odd elements
 * 
 */

#include<stdio.h>
#include<stdlib.h>

void display(int *, int);

int main()
{
    int iSize = 0;
    int *Ptr = NULL;

    printf("Enter numebr :=  ");
    scanf("%d",&iSize);

    Ptr = (int*)malloc(sizeof(int)*iSize);
    
    display(Ptr,iSize);

    return 0;
}

void display(int *Ptr, int iSize)
{   
    int mul = 0;

    for (int i = 0; i < iSize; i++)
    {   
        printf("Enter element no. %d :=  ",(i+1));
        scanf("%d",&Ptr[i]);
    }

    for(int i = 0; i<iSize; i++)
    {
        if (Ptr[i]%2!=0)
        {   
            (mul==0)?mul++:mul;
            mul = Ptr[i]*mul;
        }
        
    }
    printf("Product of all odd element is :=  %d\n",mul);
}