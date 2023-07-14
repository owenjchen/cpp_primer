#include <iostream>
#include <array>
using namespace std;
int main() {
    int n = 5;
    array<int, 5> num_array1{9}; //nitialized array
    array<int, 5> num_array2 = {0, 1, 2, 3, 4}; //initialization
    array<float, 5> float_array3 = {0.0, 1.0, 2.0, 3.0, 4.0}; //initialization

    cout << "num_array1:";
    for(int i = 0; i < n; i++)
        cout << num_array1[i] << " ";
    cout << endl;

    for(int i = n-1; i >= 0 ; i--)
        cout << num_array1[i] << " ";
    cout << endl;

    cout << "num_array2:";
    for(int i = 0; i < n; i++)
        cout << num_array2[i] << " ";
    cout << endl;

    cout << "float_array3:";
    for(int i = 0; i < n; i++)
        cout << float_array3[i] << " ";
    cout << endl;

    return 0;
}
