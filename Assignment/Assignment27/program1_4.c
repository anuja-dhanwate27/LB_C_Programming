#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Chksmall(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = Chksmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case character");

    }
    else
    {
        printf("It is not a small case character");

    }




    return 0;

}
