#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch =='a')
    {
        printf("your exam at 7 AM");
    }
    else if(ch == 'B' || ch =='b')
    {
        printf("your exam at 8.30 AM");

    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("your exam at 9.20 AM");

    }
    else if(ch == 'D' || ch =='d')
    {
        printf("your exam at 10.30 AM");

    }
    else
    {
        printf("Invalid input");
    }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the character \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

   




    return 0;

}
