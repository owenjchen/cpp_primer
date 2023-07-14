#include <iostream>
using namespace std;
int main()
{
    int num_array1[5]; //uninitialized array, random values 
    int num_array2[5] = {0, 1, 2, 3, 4}; //initialization

    for(int i = 0; i < 5; i++)
        cout << num_array1[i] << " ";
    cout << endl;

    for(int i = 0; i < 5; i++)
        cout << num_array2[i] << " ";
    cout << endl;

    return 0;
}
