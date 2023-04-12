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