#include<iostream>
using namespace std;
class mark{
    private:
    int marks;
    public :
    mark(int marks){
        this->marks = marks;
    }
    void show_data();

};
void mark::show_data(){
    cout<<this->marks<<endl;
}
int main(){
mark m1(10),m2(20),m3(30),m4(40),m5(50); 
m1.show_data();
m2.show_data();
m3.show_data();
m4.show_data();
m5.show_data();

}