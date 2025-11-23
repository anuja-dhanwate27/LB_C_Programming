#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i , j =0;
    char ch = '\0';
    for(i=1 , ch='A' ; i<=iRow ; i++)
    {
        for(j=1 ; j<=iCol; j++)
            {
                printf("%c\t",ch);
                
            }
            ch++;
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
