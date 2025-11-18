#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iLenght)
{
    int iCnt = 0;
    int iCountEven = 0;
    int iCountOdd = 0;
    int iAns=0;
    for(iCnt = 0 ; iCnt< iLenght ; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return (iCountEven - iCountOdd);


}
int main()
{
    int iSize = 0 , iRet = 0, iCnt =0;
    int *p = NULL;

    printf("Enetr number of elements \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate memory ");
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p ,iSize);

    printf("%d",iRet);
    free(p);
    return 0;
}
                            