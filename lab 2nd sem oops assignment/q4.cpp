#include<iostream>
using namespace std;

class myClass{
    public :
    myClass(){
        cout<<"Default Constructor Called"<<endl;
    }
};
int main(){
    myClass ob;
    return 0;

}