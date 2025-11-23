#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i , j =0;
    int iCount1=0,iCount2 = 0;
    for(i=1, iCount1 = 1 , iCount2=1 ; i<=iRow ; i++)
    {
        for(j=1; j<=iCol; j++)
            {
                if(iCount1 < 10)
                {
                    printf("%d\t",iCount1);
                    iCount1++;
                }
                else
                {
                    printf("%d\t",iCount2);
                    iCount2++;
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
