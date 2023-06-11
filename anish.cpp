#include<iostream>

using namespace std;

class Shape
{
   protected:
    int a,b;
public:
void input(int x,int y)
{
a=x;
b=y;
}

virtual void output()
{

}


};

class Rectangle  :public Shape
{
public:
void output()
{
    cout<< a*b;
}
};

class Triangle :public Shape
{
    public:
void output()
{
    cout<< 0.5*a*b;
}
};

int main()

{
   Shape *obj;
   obj = new Rectangle();
   obj->input(10,20);
   obj->output();
   
   
   }



#include<iostream>

using namespace std;

class A
{
    public:
    int a=10,b=20;
    A* operator=(A obj)
    {
a=obj.a;

    return this;

    }

};

int main()
{
    A obj1,obj2;
    obj1.a=100;
    obj2=obj1;
    cout<<obj2.a;

}