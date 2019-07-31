#include<iostream>
using namespace std;

double func(char* arr)
{
        int sum=0;
        int space=0;
        double ret;
        while(*arr!='\0')
        {
                if(*arr==' ')
                        space++;
                else
                        sum++;
                arr++;
        }
        ret=sum/(space+1);
        return ret;
}
int main()
{
        char str[100]={};
        double rate=0;
        while(cin>>str)
        {
                rate=func(str);
                cout<<rate<<endl;
        }
        return 0;
}
