#include<iostream>
#include<string.h>
using namespace std;

class book
{
private:
    string book_id;
    string book_name;
    string book_author;
    int isbn;
    string dop;
    public:
    void set_data()
    {
        cout<<"Enter Book ID"<<endl;   
        cin>>this->book_id;
        cout<<"Enter Book name"<<endl;      
        cin>>this->book_name;
        cout<<"Enter Book Author"<<endl;
        cin>>this->book_author;
        cout<<"Enter ISBN"<<endl;
        cin>>std::ws;
        cin>>this->isbn;
        cout<<"Enter Date of Publication"<<endl;
        cin>>std::ws;
        cin>>this->dop;
    }
    void show_data(){
        cout<<"Book ID is "<<this->book_id<<endl;
        cout<<"Book Name is "<<this->book_name<<endl;
        cout<<"Book Author is "<<this->book_author<<endl;
        cout<<"Book ISBN is "<<this->isbn<<endl;
        cout<<"Book Date of Publish is "<<this->dop<<endl;
    }
};

int main(){

book b1;

b1.set_data();
b1.show_data();
return 0;
}






// 7.Create a class mark which contains the marks of five students use constructor as necessary.
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

//5.Write a program to enter 10 words and a string of three long sentences, 
//implement a function to calculate the number of words present in the given 
//string and remaining words, use a member function to display matched word with frequency of occurrences of remaining words in the string.

#include <iostream>
#include <regex>
#include <string>
using namespace std;

class counter
{
private:
    string str;
    vector<string> wordsToBeMatched{"is", "are", "am", "to", "that", "this", "not", "for", "in", "not"};
    //ToDo count occurences of remaining words;
    //vector<string> remainingWords;

    void countOccurrences(string str, string word)
    {
        string regexPattern = "\\b" + word + "\\b";
        const regex pattern(regexPattern);
        smatch match;
        int count = 0;
        while (regex_search(str, match, pattern))
        {
            count++;
            str = match.suffix().str();
        }

        cout << "Number of Occurences of word '" << word << "' is " << count << " times." << endl;
        
    }

public:
    void xcruz()
    {
        cout << "Enter a string: ";
        getline(cin, str);
        for (auto element : wordsToBeMatched)
        {
            countOccurrences(str, element);
        }
    }
};

int main()
{
    counter c;
    c.xcruz();
    return 0;
}


//2.Create a class mobile phone accept data for n numbers of mobiles and display the same in the well formatted manner.
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


