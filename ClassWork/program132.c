#include<stdio.h>
#include<stdlib.h>
float AverageCount(int Arr[] , int iSize)
{   
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
       
       
    }
    return ((float)iSum/(float)iSize);    // Explicitly type casting


}
int main()
{
    int iLength = 0 , iCnt = 0 ; 
    int *ptr = NULL;
    float fRet = 0.0f;
  

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr =(int*)malloc(iLength* sizeof(int));
    if(NULL == ptr) // industrial way of coding 
    {
        printf("Unable to allocate memory");
        return -1;

    }

    printf("Enter the elemnts : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }

    fRet = AverageCount(ptr , iLength); 
    printf("Average is   : %f ",fRet);
    free(ptr);

    return 0;
}
