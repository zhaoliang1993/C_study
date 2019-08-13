#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str;
    int ret=0;
    if(cin>>str)
        ret=1;
    while(ret)
    {
        reverse(str.begin(),str.end());
        cout<<str;
        if(cin>>str)
            ret=1;
        else
            ret=0;
        if (ret)
            cout<<" ";
    }
  return 0;
}
