#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[] , int iLenght,int iNo)
{
    int iCnt = 0;
    int iOcc = -1;
    for(iCnt = 0 ; iCnt< iLenght; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        { 
            iOcc = iCnt;

        }
    }
    return iOcc;
}
int main()
{
    int iSize = 0 ,  iCnt =0 , iValue=0;
    int *p = NULL;
    int iRet = 0;

    printf("Enetr number of elements \n");
    scanf("%d",&iSize);

    printf("Enter the element to check its first occurence: \n");
    scanf("%d",&iValue);
   

    p =(int*)malloc(iSize*sizeof(int));

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
   
    iRet = LastOcc(p ,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of number is %d",iRet);
    }
    free(p);
    return 0;
}
                            