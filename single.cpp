#include<iostream>

using namespace std;

class A{
protected : int a1;
private: int f1;
    public:
    int a,b;
A()
{
    cout<<999;
}
A(int x,int y)
{
a=x;
b=y;
cout<<a<<b<<endl;
}
};
class B : public A
{
    public:
    int c,d;
    B()
    {
        c=10;
        a1=11;
        cout<<a1<<endl;
        cout<<c<<endl;
        cout<<a<<b;

    }

};
int main()
{

    B obj2;


}