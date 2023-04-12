#include <bits/stdc++.h>
using namespace std;

class CountWord
{
    string str;
    string words[10];

public:
    CountWord(string str)
    {
        this->str = str;
    }

    void count(string str[], int size)
    {

        for (int i = 0; i < size; i++)
        {
            int val = getCount(str[i]);
            cout << "No of Occurence of word :  `" << str[i] << "` is " << val << " :: ";
            cout << "remaining number of words are  : " << size - val << endl
                 << endl;
        }
    }

    int getCount(string temp)
    {
        int i = 0;

        char *dup = strdup(str.c_str());

        char *s = strdup(temp.c_str());
        char *word = strtok(dup, " ");

        while (word)
        {
            if (strcmp(word, s) == 0)
            {
                i++;
            }
            word = strtok(NULL, " ");
        }

        return i;
    }
};

int main()
{
    string str; // = "i is this fish";
    cout << "Enter a String" << endl;
    getline(cin, str);

    CountWord c(str);
    string result[10] = {"this", "are", "hello", "you", "can", "do", "i", "from", "is", "from"};
    int size = sizeof(result) / sizeof(result[0]);
    // cout << size;
    c.count(result, size);
}