#include<iostream>
using namespace std;

int main(){
    
 int a[]={1,2,3,4,5};
 cout<<sum(a[],5);
return 0;

}
int sum(int *a,int size)
{
    int total=0;
    {
        for(int i=0;i<size;i++)
        total=total+a[i];
    }
    return total;
}