#include<iostream>
using namespace std;
int main()
{
 int x,s=0;
 cout<<"enter no.(enter 0 for exit)";
 while(1)
 {
  cin>>x;
  if(x==0)
  break;
  s+=x;
 }
 cout<<"sum is"<<s<<endl;
 return 0;
 



}