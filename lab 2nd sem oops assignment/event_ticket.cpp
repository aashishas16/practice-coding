#include<iostream>
using namespace std;
class event{
    private:
        string event_name="AAYAM 8.O";
        string event_date="28-01-23";
        string college_name="NIT Agartala";
        string fname;
        string lname;
        string college_id;
        string venue="Admin Block";
        string event_time="06:00 p.m.";
    public:
        void set_data();
        void show_data();
};
void event::set_data(){
    cout<<"enter your first name:"<<endl;
    cin>>fname;
     cout<<"enter your last name:"<<endl;
    cin>>lname;
    cout<<"enter your college ID:"<<endl;
    cin>>college_id;
}
void event:: show_data(){
cout<<"*******Event Ticket "<<event_name<<"*******"<<endl;
cout<<"      "<<college_name<<endl;
cout<<"name :"<<fname<<" "<<lname<<endl;
cout<<"student ID :"<<college_id<<endl;
cout<<"venue :"<<venue<<endl;
cout<<"Date :"<<event_date<<endl;
cout<<"Time :"<<event_time<<endl;
}
int main(){
    event ob1;
    ob1.set_data();
    ob1.show_data();
    return 0;
}