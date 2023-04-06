//write a program to calcullate the sum oo all even no. and odd number 
// make an array of size 10 and take user input array


#include<iostream>
using namespace std;
int main(){
 int a[10],i,even=0,odd=0;
 cout<<"enter 10 numbers";
 for( i=0;i<=9;i++)
 cin>>a[i];
 for(i=0;i<=9;i++)
 {
    if(a[i]%2==0)
    even=even+a[i];
    else
    odd=odd+a[i];
   
 }
 cout<<"sum of even number is="<<even;
 cout<<"sum of odd number sum is"<<odd;




    return 0;

}