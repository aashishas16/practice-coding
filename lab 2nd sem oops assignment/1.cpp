//write a cpp program to create a data store for books the data members will be book id bookname bookauthor isbn publish date accept and print the data in a wll formet manner
#include<iostream>
#include<string.h>
using namespace std;
class book
{
private :
string book_id;
string book_name;
string book_author;

public:
void set_data()
{
cout<<"enter book id::"<<endl;
cin>>this->book_id;
cout<<"enter book name::"<<endl;
cin>>this->book_name;
cout<<"book author"<<endl;
cin>>this->book_author;

}
 void show_data()
{
    cout<<"X::"<<this->book_id;
    cout<<"Y::"<<this->book_name;
    cout<<"Z::"<<this->book_author;
}



};
int main()
{
    book o1;
    o1.set_data();
    o1.show_data();
    return 0;
}