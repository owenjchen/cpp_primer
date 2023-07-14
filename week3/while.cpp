#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int sum = 0;
    cout << "Sum of ";
    while(i < 10)
    {
        cout << i << " ";
        sum += i;
        i++;
    }
    cout << "is " << sum << endl;
    return 0;
} 
    // num = 10;
    // do
    // {
    //     cout << "num = " << num << endl;
    //     num--;
    // }while (num > 0);

    // num = 10;
    // while (num > 0)
    // {
    //     if (num == 5)
    //         break;
    //     cout << "num = " << num << endl;
    //     num--;
    // }
