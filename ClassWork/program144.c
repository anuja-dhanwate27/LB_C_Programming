#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR ;

int Maximum(int Arr[] , int iSize)
{
    int iCnt = 0 , iMax = 0; // unable to handle negative input
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
    

}


int main()
{
    int iLength = 0 , iCnt = 0  , iRet = 0;
    IPTR iPtr = NULL;


    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);
    
    // step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength*sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory ");
        return -1;
    }

    printf("Enter the value : \n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    
   

    // step 2 : use the memory
    iRet = Maximum(iPtr , iLength);
    printf("Maximum number is %d\n",iRet);
    
    

    // step 3: free the memory
    free(iPtr);
    

   return 0;
}