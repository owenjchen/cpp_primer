#include <iostream>
using namespace std;
int main() {
    int i = 10;
    int j = i++;
    int k = ++i;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "k = " << k << endl;
}