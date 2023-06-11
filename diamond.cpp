#include<iostream>

using namespace std;


class A{
public:
A(int a)
{
    cout<<"parent a"<<endl;
}

};

class B :  public A
{
public:
B(int a,int b):A(a)
{
    cout<<"parent b"<<endl;
}

};

class C:  public A
{
    public:

C(int a,int c):A(a)
{
    cout<<"parent c"<<endl;
}

};

class D: public C , public B 
{
    public:

D(int a,int b,int c,int d):C(a,c),B(a,b)
{
    cout<<"parent d"<<endl;
}

};

int main()
{
     D obj(1,2,3,4);
}