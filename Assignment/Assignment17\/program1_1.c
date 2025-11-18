#include<stdio.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;


BOOL Check(int Arr[] , int iLenght,int iNo)
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
    if(iCount > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    


   
}
int main()
{
    int iSize = 0 ,  iCnt =0 , iValue=0;
    int *p = NULL;
    BOOL bRet = 0;

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

    bRet = Check(p ,iSize,iValue);
    if(bRet == 1)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    

    
    free(p);
    return 0;
}
                            