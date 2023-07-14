#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    cout << "Sum of ";
    for(int i = 0; i < 10; i++)
    {
        sum += i;
        cout << i  << " ";
    }
    cout << "is  "  << sum << endl;
    return 0;
}