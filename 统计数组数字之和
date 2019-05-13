#include<stdio.h>
int sum1(int* arr,int n)
{
        int s=0;
        for(int i=0;i<n;i++)
        {
                s+=*(arr+i);
        }
        return s;
}

int sum2(int* arr)
{
        int s=0;
        for(;*arr!='\0';arr++)  //错误情况，int数组不是以'\0'结尾
                s+=*arr;
        return s;
}
int main()
{
        int arry[5]={1,2,3,4,5};
        int s=0;
        s=sum1(arry,sizeof(arry)/sizeof(int));
        printf("the sum of arry is %d",s);
        s=sum2(arry);
        printf("the sum of arry is %d",s);
        return 0;
}
