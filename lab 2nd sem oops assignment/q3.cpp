#include <iostream>
#include <string.h>
using namespace std;

class event
{
private:
    string Event_name = "Aayam", Event_date = "32-01-2023", fname, lname, id, branch = "MCA", college_name = "NIT AGARTALA";

public:
    void set_data();
    void show_data();
};
void event::set_data()
{
    cout << "Enter first name :" << endl;
    cin >> this->fname;
    cout << "Enter last name :" << endl;
    cin >> this->lname;
    cout << "Enter ID :" << endl;
    cin >> this->id;
}
void event::show_data()
{
    cout << "--------------------Event Ticket for " << this->Event_name << " --------------------" << endl;
    cout << "---> Event Date is : " << this->Event_date << endl;
    cout << "---> Your First Name is : " << this->fname << endl;
    cout << "---> Your Last Name is : " << this->lname << endl;
    cout << "---> Your ID is : " << this->id << endl;
    cout << "---> Your Branch is : " << this->branch << endl;
    cout << "---> Your College Name is : " << this->college_name << endl;
    cout << "-----------------------------------x---------------------------" << endl;
};

int main()
{
    event e;
    e.set_data();
    e.show_data();
    return 0;
}