#include<iostream>
using namespace std;
int main()
{
    int i,x;
    for(i=0;i<=3;i++)
    {
        cin>>x;
        if(x%2==0)
        break; 
    }
    if (i==4)
    cout<<"game over";
    else
    cout<<"you win";
    return 0;





    
}