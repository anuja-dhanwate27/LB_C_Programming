#include<stdio.h>
int sum_natural_numbers(int limit)
{
    int iCnt=0;
    int iCount = 0;

    for(iCnt = 1 ; iCnt<=limit ; iCnt++)
    {

       iCount = iCount+iCnt;
    }
    return iCount;
}
int main()
{
    int limit = 0;
    printf("Enter number : ");
    scanf("%d",&limit);

    printf("%d",sum_natural_numbers(limit));
    
    return 0;

}