#include<iostream>
using namespace std;
int main()
{
int a[10],i,sum=0;
float avg;
cout<<"enter 100 numbers";
for(i=0;i<10;i++)
cin>>a[i];
for(i=0;i<10;i++)
sum=sum+a[i];
avg=sum/10;
cout<<"average is::"<<avg<<endl;
    return 0;
}