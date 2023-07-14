#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "CCS Students!";
    string result = str1 + ", " + str2;

    cout << "result = " + result << endl;

    cout << "The length is " << result.length() << endl;

    cout << "str1 < str2 is " << (str1 < str2) << endl;

    return 0;
}