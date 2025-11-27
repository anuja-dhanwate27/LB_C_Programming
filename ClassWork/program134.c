#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR ;
int main()
{
    int iLength = 0 , iCnt = 0;
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
    //call to the  function which contains buisness logic
    //Fun(iPrt , iLength)

    // step 3: free the memory
    free(iPtr);
    

   return 0;
}