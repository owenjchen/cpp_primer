#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string greet = "Hello, ";
    string greet_end = "!\n";
    cout << "Please enter your name:";
    cin >> name; 	
    cout << greet + name + greet_end;
    return 0;
}
