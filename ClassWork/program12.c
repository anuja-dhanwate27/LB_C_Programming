/*
    START 
           Accept the number store as no
           divide no by 2
           if the reminder is 0
                  then display as even
           otherwise 
                  display as odd
    STOP

*/




#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("It is Even number\n");
    }
    else
    {
        
        printf("It is Odd number\n");

    }

}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);




    return 0;
}