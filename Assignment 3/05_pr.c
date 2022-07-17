/**
 * @file 05_pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @problem statement :- Accept one character from the user and check whether that character
 *                       is vowel or not (a,e,i,o,u)
 *
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL checkVowel(char);

int main()
{

    char cVal = '\0';
    BOOL bRet = FALSE;
    printf("Enter character :-\n");
    scanf("%c", &cVal);

    bRet = checkVowel(cVal);

    if (bRet == TRUE)
    {
        printf("The character '%c' is an vowel.\n", cVal);
    }
    else
    {
        printf("The character '%c' is not an vowel.\n", cVal);
    }

    return 0;
}

BOOL checkVowel(char cVal)
{
    if (cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u')
    {
        return TRUE;
    }
    else if (cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}