#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Create a vector of a string
    vector<string> msg = {"Hello", "C++", "World", "from", "CCS", "C++", "Programming", "Class!"};
    
    // Version 2 - Print each word in the string vector using for each loop
    int n = 0;
    cout << "Version 2:" << endl;    
    for (string word : msg)
    {
        cout << word << " ";
        n++;
    }
    cout << endl;
    cout << "There are " << n << " number of words in the message" << endl;
}