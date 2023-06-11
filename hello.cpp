#include<iostream>
using namespace std;

class A
{
    public:
    static int  a;
int b=100;
   
 void  change()
   {
b+=100;
a+=12;
   }


   static void fun2()
    {
        b+=100;
        cout<<"parent fun";
    }
  
};

// class B : public A{

// public:
//   int fun(int a)
//     {
// cout<<"bisht";
//     }

//        void fun2(int a )
//     {
//         cout<<"child fun";
//     }
    
// };



int A::a = 1;
int main()
{
    // cout<<A::a;
// A obj1,obj2;
// cout<<obj1.a<<endl;
// cout<<obj1.b<<endl;
// obj1.change();
// obj2.change();
// obj1.change();
// cout<<obj2.a<<endl;
// cout<<obj2.b<<endl;
A::fun2();
// obj1.fun2();
// obj.fun2();
// B obj2;
// // obj2.fun(12);
// obj2.fun2();
// obj.fun(12);
}