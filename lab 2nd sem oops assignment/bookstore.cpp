#include<iostream>
#include<string>
using namespace std;
class book{
    private:
        string book_id;
        string book_name;
        string book_author;
        int isbn;
        string dop;
    public:
        void set_data(){
            cout<<"enter book id"<<endl;
            cin>>book_id;
            cout<<"enter book name"<<endl;
            cin>>book_name;
            cout<<"enter book author"<<endl;
            cin>>book_author;
            cout<<"enter isbn number"<<endl;
            cin>>isbn;
            cout<<"enter date of publishing"<<endl;
            cin>>dop;
        }
        void display(){
            cout<<"book id is:"<<book_id<<endl;
            cout<<"book name is:"<<book_name<<endl;
            cout<<"book author is:"<<book_author<<endl;
            cout<<"isbn number is:"<<isbn<<endl;
            cout<<"date of publish is:"<<dop<<endl;
        }
};
int main(){
    book ob1;
    ob1.set_data();
    ob1.display();
    return 0;
}