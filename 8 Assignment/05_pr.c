/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-20
 *
 * @problem statement :- Accept N numbers from user and display all such elements which are multiples of 11
 *
 */

#include <stdio.h>
#include <stdlib.h>

void Display(int[], int);
int main()
{

    int iSize = 0;
    int *Ptr = NULL;
    printf("Enter the number :-\n");
    scanf("%d", &iSize);

    Ptr = (int *)calloc(iSize, sizeof(int));

    if (Ptr == NULL)
    {
        printf("Unable to allocate the memory.\n");
    }
    else
    {
        printf("Memory alloacated successfully.\n");
        Display(Ptr, iSize);
    }
    free(Ptr);
    return 0;
}

void Display(int P[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter no. %d element :-\n", (i + 1));
        scanf("%d", &P[i]);
    }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("Element no. %d :- %d\n",(i+1),P[i]);
    // }
    printf("Elements which are multiples of 11 are :-\n");
    for (int i = 0; i < size; i++)
    {
        if (P[i] % 11 == 0)
        {
            printf("%d\n", P[i]);
        }
    }
}