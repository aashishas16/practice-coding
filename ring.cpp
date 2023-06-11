#include<iostream>
using namespace std;
class bell {
    public:
    bell() {
        cout<<"Bell created!"<<endl;
    }
    ~bell() {
        cout<<"Bell destroyed!"<<endl;
    }
    void ring() {
        cout<<'\a';
    }
};
int main() {
    char input;
    while(true) {
        cout<<"Enter any character to ring the bell and q to exit: ";
        cin>>input;
        if(input == 'q') {
            break;
        }
        bell b;
        b.ring();
    }
    return 0;
}
