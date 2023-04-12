#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cout<<"enter number of array length";
cin>>n;
  int a[n],i,r,t;
  for(i=0;i<n;i++) // value of array input by user
    {
        cin>>a[i];
    }

sort(a ,a+n);

// for(r=1;r<n;r++)
// for(i=0;i<n-r;i++)
// {
//     if(a[i]>a[i+1])
//     {
//         t=a[i];
//         a[i]=a[i+1];
//         a[i+1]=t;
//     }
// }

for(int i:a)
{
    cout<<i<<endl;
}

    return 0;
}