#include <iostream>
using namespace std;
class mobilePhone
{
private:
    int number;

public:
    void set_data();
    void show_data();
};
void mobilePhone::set_data()
{
    cout << "Please Enter Mobile Phone Number: " << endl;
    cin >> this->number;
}
void mobilePhone::show_data()
{

    cout << this->number << endl;
}

int main()
{
    int n;
    cout << "Enter how many mobile phone numbers you want to store." << endl;
    cin >> n;
    mobilePhone mp[n];
    for (int i = 0; i < n; i++)
    {
        mp[i].set_data();
    }
    cout << "List of all Mobile Numbers is : " << endl;
    for (int i = 0; i < n; i++)
    {
        mp[i].show_data();
    }

    return 0;
}