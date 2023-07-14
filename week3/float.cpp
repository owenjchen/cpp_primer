#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float f1 = 23400000000;
    float f2 = f1 + 10; 
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << std::fixed << std::setprecision(15) << f1 << endl;
    cout << std::fixed << std::setprecision(15) << f2 << endl;

    double d1 = 23400000000;
    double d2 = d1 + 10; 
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << std::fixed << std::setprecision(15) << d1 << endl;
    cout << std::fixed << std::setprecision(15) << d2 << endl;
}
