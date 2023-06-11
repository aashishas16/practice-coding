#include<iostream>
using namespace std;

class A
{
    public:
    void f1()
    {
        cout<<"ashish";
    }
};
class B1 : public A
{
    public:
    void f2()
    {
        cout<<"ashish 2";
    }
};
class B2: public A
{
    public:
    void f3(){
        cout<<"ashish 3";
    }
    void f4(){
        cout<<"tushar";
    }
};
class C:public A,public B1,public B2
{
    public:
void f4(){
    cout<<"run";
}
    
};

int main()
{
  C obj1;
  obj1.f4();
  obj1.f2();
  obj1.f1();
  obj1.f3();



}