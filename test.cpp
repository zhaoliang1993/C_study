#include<iostream>

using namespace std;

class A
{
private:
        int num;
public:
        A(int x)
        {
                num = x;
                cout << "A begin" << endl;
        }
        void read()
        {
                cout << num << endl;
        }
        void set(int x)
        {
                num = x;
        }
};

class B:public A
{
private:
        int age;
public:
        B(int x)
        {
                age = x;
                cout << "B begin" << endl;

        }
        void _read()
        {
                cout << age <<endl;
        }
        void _set(int x)
        {
                age = x;
        }
};


int main(int argv,char** argv)
{
        B(5);
        return 0;
}
