#include <cstdint>
#include <climits>
#include <cmath>
#include <iostream>
using namespace std;

int main(){

    // Max numbers from <climits>
    int n = INT_MAX;
    long l = LONG_MAX;
    cout << "Max int = " << n << endl;
    cout << "Max long = " << l << endl;    

    // Fixed width integers and max macros in <cstdint>
    int8_t  int8 = INT8_MAX;   // int8_t is the same as char.
    int16_t int16 = INT16_MAX;
    int32_t int32 = INT32_MAX; 
    int64_t int64 = INT64_MAX;
    cout << "Max int8 = " << (int) int8 << endl;  
    cout << "Max int8 = " << INT8_MAX << endl;
    cout << "Max int16 = " << int16 << endl;   
    cout << "Max int32 = " << int32 << endl;  
    cout << "Max int64 = " << int64 << endl;  

    // Calculated limits;
    int n2 = (long)(pow(2, 31) - 1);
    long l2 = (long)(pow(2, 63) - 1);

    cout << "Max int = " << n2 << endl;
    cout << "Max long = " << l2 << endl;      
}