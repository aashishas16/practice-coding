// sorting of array 
#include<iostream>
using namespace std;
int main()
{
 int arr[10],i,a,t;
 for(i=0;i<=9;i++)
 cin>>arr[i];

 for(a=1;a<=9;a++) // user input 1 2 3 4 5 its take fisrt two values (1,2) and campare with a[i]>a[i+1] then we do swaping 
 for(i=0;i<=9-a;i++)
 {
    if(arr[i]>arr[i+1])
    {
    t=arr[i];
    arr[i]=arr[i+1];
   arr[i+1]=t;
    }
 }
 for(i=0;i<=9;i++)
 cout<<"_"<<arr[i]<<endl;
cout<<"second largest"<<arr[8];

 

    return 0;
}