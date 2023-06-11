#include<iostream>
using namespace std;
int swap(int *p, int *q);
int main()
{
int a,b;
cout<<"enter two no."<<endl;
cin>>a>>b>>endl;
swap(&a,&b);
cout<<a<<b<<endl;

return 0;

}
int swap(int *p,int *q){
 int z;
 z=*p;
 *p=*q;
 *q=z;

}