#include<iostream>
using namespace std;
int main()
{

char str[20];// 20 characters we write 
cin>>str; // user input 
gets(str);// gets in gets function all the words and printed if our limit of string is 20 and we write 30 words 
//then they will also print 30 words privacy policy will not satisfy this function 
fgets(str,20,stdin);// fgets se ham limit set karte h kitna characters lena h 
// fgets(arrayname,inputsize,stdin)
cout<<"name is "<<str;
   





//     char str[10]={"indore"};
//   int i;

//   for(i=0;str[i];i++); // not
//   cout<<i;
  
 
 //for(i=0;i<=9;i++).....
 //for(i=0;str[i];i++).....

    return 0;
}