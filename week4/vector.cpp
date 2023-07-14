#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
    vector<int> ivec0; // initially empty
    vector<int> ivec(10, -1); // ten int elements, each initialized to -1
    vector<string> svec1; // default initialization; svec has no elements
    // give ivec some values
    vector<int> ivec2(ivec); // copy elements of ivec into ivec2
    vector<int> ivec3 = ivec; // copy elements of ivec into ivec3
    //vector<string> svec(ivec2); // error: svec holds strings, not ints
     vector<string> svec(10, "hi!"); // ten strings; each element is "hi!"

    //vector<int> vi = 10; // error: must use direct initialization to supply a size
  
    vector<int> v2; // empty vector

    // initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};

    // uniform initialization
    vector<int> vector2{6, 7, 8, 9, 10};

    // method 3
    vector<int> vector3(5, 12);

    for (int i = 0; i < 100; i++) {
        v2.push_back(i);
    // append sequential integers to v2
    // at end of loop v2 has 100 elements, values 0 . . . 99
    }

    cout << "vector1 = ";
    // ranged loop
    for (const int& i : vector1) {
        cout << i << "  ";
    }
    cout << endl;

    cout << "vector1 = ";
    // ranged loop
    for (int i : vector1) {
        cout << i << "  ";
    }
    cout << endl;

        cout << "v2 = ";
    // ranged loop
    for (const int& i : v2) {
        cout << i << "  ";
    }
    cout << endl;

    cout << "\svec = ";
    // ranged loop
    for (string s : svec) {
        cout << s << "  ";
    }
    cout << endl;
}