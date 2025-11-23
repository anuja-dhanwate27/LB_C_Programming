#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
  
    for(iCnt = 1 ; iCnt <= iNo*2 ; iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("#\t");
        }
        else
        {
            printf("%d\t",(iCnt/2)+1);
            
        }
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;

}