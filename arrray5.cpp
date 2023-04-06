//find the program to find the greatest number stored in array of size 10 take array value from user

#include<iostream>
using namespace std;
int main()
{
    int a[10],max;
    for(int i=0;i<=9;i++)
    cin>>a[i];
    max=a[0]; // 1st element we take and campair with second to last and taking if condition for over other num are greater the first one the greater number comes under max continous we do this process
    for(int i=1;i<=9;i++)
    {
        if(a[i]>max) // a[i]<min to find minumum num
        max=a[i];
    }

cout<<"max num is=="<<max;
    return 0;
}