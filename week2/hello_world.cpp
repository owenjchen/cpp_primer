#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Create a vector of a string
    vector<string> msg = {"Hello", "C++", "World", "from", "CCS", "C++", "Programming", "Class!"};

    //Version 1 - Print each word in the string vector using for loop with i
    int n = msg.size();
    for (int i = 0; i < n; i++) {
        cout << msg[i] << " ";
    }
    cout << endl;
    cout << "There are " << n << " number of words in the message" << endl;
}