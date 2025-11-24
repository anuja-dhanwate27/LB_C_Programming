#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i , j=0;
    for(i=1; i<=iRow ; i++)
    {
        if(iRow != iCol)
        {
            printf("Invalide input\n");
            printf("iRow number and iCol number should be same ");
            return;
        }
        for(j=1; j<=iCol; j++)
            {
              if(i+j <=iCol+1)
              {
                printf("*\t");
              }
              else
              {
                printf("#\t");
              }
                
            }
           printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2=0;
    printf("Enter number of rows : ");
    scanf("%d",&iValue1);
    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
