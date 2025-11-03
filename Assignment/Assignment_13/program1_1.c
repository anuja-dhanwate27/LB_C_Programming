#include<stdio.h>
void print_numbers(int limit)
{
    int iCnt=0;
    for(iCnt = 1 ; iCnt<=limit ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int limit = 0;
    printf("Enter number : ");
    scanf("%d",&limit);

    print_numbers(limit);
    
    return 0;

}