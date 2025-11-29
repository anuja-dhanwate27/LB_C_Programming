#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];
    printf("Enter the name of file that you want to create:\n ");
    scanf("%s",FileName);// he already aaray ch nav ahe mhanun & nhi dila

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create the file \n");

    }
    else
    {
        printf("File succesfully created with fd : %d \n",fd);
    }
    return 0;

}