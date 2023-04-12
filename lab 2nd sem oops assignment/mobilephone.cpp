#include<iostream>
using namespace std;
class mobile_phone{
    private:
    int number;
    public:
        void set_data();
        void show_data();
};
void mobile_phone::set_data(){
    cout<<"enter number:"<<endl;
    cin>>number;
}
void mobile_phone :: show_data(){
    cout<<number<<endl;
}
int main(){
    cout<<"enter how many numbers you want to store:"<<endl;
    int n;
    cin>>n;
    mobile_phone ob1[n];
    for(int i=0;i<n;i++){
        ob1[i].set_data();
    }
    cout<<"your number are:"<<endl;
    for(int i=0;i<n;i++){
        ob1[i].show_data();
    }
    return 0;
}