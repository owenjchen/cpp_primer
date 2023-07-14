#include <iostream>
#include <string>
using namespace std;

int main(){
    //char name[200] = {'\0'};
    string name;
    cout << "Please enter your name:";
    cin >> name; 	
    cout << "Hello, " << name << "!" << endl; 
    return 0;
}
