#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
    string name;
    string greet = "";
    string greet_end = "!\n";

    time_t t = std::time(0);   // get current time;
    std::tm now = *std::localtime(&t); // convert to local time;
    int h = now.tm_hour;
    int m = now.tm_min;

    if (h < 12) {
        greet = "Good morning, ";
    } else if (h <18) {
        greet = "Good afternoon, ";
    } else {
        greet = "Good evening, ";
    }

    cout << "Please enter your name:";
    cin >> name; 	
    cout << greet + name + greet_end;
    return 0;
}
