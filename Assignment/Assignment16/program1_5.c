#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[] , int iLenght,int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0 ; iCnt< iLenght; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
            
        }
    }
    return iCount;


   
}
int main()
{
    int iSize = 0 ,  iCnt =0 , iValue=0;
    int *p = NULL;
    int iRet = 0;

    printf("Enetr number of elements \n");
    scanf("%d",&iSize);
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p ,iSize,iValue);
    printf("%d",iRet);
    

    
    free(p);
    return 0;
}
                            