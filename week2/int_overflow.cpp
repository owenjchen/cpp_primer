#include <iostream>
using namespace std;

int main(){
    int a = 56789;
    int b = a;
    int c = a * b;
    cout << "int product:" << endl;
    cout << a << "*" << b;
    cout << "=" << c << endl;

    long l = (long)a * (long)b;
    cout << "long product:" << endl;
    cout << a << "*" << b;
    cout << "=" << l << endl;    
}