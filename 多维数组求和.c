#include<stdio.h>
#define COL 3
int sum(int arr[][COL],int ROW)
{
        int s=0;
        for(int i=0;i<ROW;i++)
                for(int j=0;j<ROW;j++)
                        s+=*(*(arr+i)+j);
        return s;

}
int main()
{
        int arr[3][3]={1,2,3,4,5,6,7,8,9};
        int su=0;
        su=0;
        su=sum(arr,3);
        printf("%d\n",su);
        return 0;
}
