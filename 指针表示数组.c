#include<stdio.h>

void arry1()
{
        int arr[5]={1,2,3,4,5};
        for(int i=0;i<5;i++)
                printf("%d\t",*(arr+i));
        printf("\n");
}

void arry2()
{
        int arr[3][3]={1,2,3,4,5,6,7,8,9};
        for(int i=0;i<3;i++)
        {
                for(int j=0;j<3;j++)
                        printf("%d\t",*(*(arr+i)+j));
                printf("\n");
        }
}
int main()
{
        arry1();
        arry2();
        return 0;
}
