#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
int a[n],sum=0,avg;
cout<<"enter n num";
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
sum=sum+a[i];
avg= sum/n;
cout<<"sum is "<<avg;




    return 0;
}