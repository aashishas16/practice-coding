#include<iostream>

using namespace std;

class Person
{
   private:
   int Age;
   char Name[20];
   protected:
   void setAge(int a)
   {
    age =a;
   }
   void setName(char n[]){ strcpy(name,n);}
   public:
   Person(int a, char n[])
   {
    age=a;
    strcpy(name,n);
   }
   int getAge(){ return age;}
   char* getName(){return name;}
};

class Employee:public Person    //user2,,,,,,,
{
    private:
    float salary;
    public: 
    Employee():Person(20,"ashish") 
    {}
    ~Employee()
    {
        cout<<"destructor is class employee"
    }
    void setEmployee (int a,char n[],float s)
    {
        setAge(a);
        setName(n);
        salary=s;
    }
};
int main() // user1
{
    Employee e1;
}