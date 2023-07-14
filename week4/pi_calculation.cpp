/*
Pi Calculations Based on Spigot Functions
https://sites.google.com/site/calculatepiincpp/
*/

// CPP_Calculate_Pi_Rabinowitz_and_Wood_FIT_Modified.xcodeproj
//
// FIT Stands for Florida Institute of Technology and is the source of the
// code from which this has been adapted.
// See: Source: https://cs.fit.edu/~mmahoney/cse3101/pi.c.txt
// June 6, 2019
//
// The number of digits that match the non-modified file increases as the specified value of n is
// increased. See the note where n is set.
//
// Analyze the output in the following two programs.
// Run this program first. The file output is then read by the other two files
// CPP_Analyze_file_Of_PI_Digits.xcodeproj
// Tabulates the number of times each digit appears in the file, and
// shows the total number of digits in the file.
// CPP_Analyze_Two_Files_of_Pi_Digits.xcodeproj
// Compares two files having digits of pi. One is a "standard" and the other
// is from this program. The program reports the number of the first digit in which
// the two files do not match.
//
//
// Created by Keith Greiner on 5/25/19.
// Copyright © 2019 Keith Greiner. All rights reserved except for FIT source file.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <vector>
// Includes for time duration calculations
#include <chrono>
#include <ctime>
#include <sys/time.h> // for C code in testCcode0(...) function
#include <thread>
// End includes for time duration calculations
using namespace std;
class DivisionComponents
{
    public:
    short piVal;
    // Following are available for future use
    //int quotient;
    //int remainder;
} d0;
void print_Vector(std::vector <DivisionComponents> pi, int n);
int write_to_File(std::vector <DivisionComponents> pi, int n);

void print_Vector(std::vector <DivisionComponents> pi, int n)
{
    printf("Vector %d.", pi[1].piVal);
    for(int i = 2; i < 20; ++i)
    {
    printf("%04d",pi[i].piVal);
    } // End for(int i = 2 ...
    cout << endl;

    printf("Vector %d.", pi[1].piVal);
    for(int i = 2; i < n-1; ++i)
    {
        printf("%04d",pi[i].piVal);
    } // End for(int i = 2 ...

    printf("\n");

}

int write_to_File(std::vector <DivisionComponents> pi, int n, const char* fname)
    {
    cout << "In Write_to_File function\n";

    //char str[50];

    //std::string s1 ;
    //s1 = "Test string";
/*
    //open file Output_test.txt in write mode
    FILE *fptr = fopen(fname, "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 99999999;
    } // End if (fptr...

    fprintf(fptr,"%d.", pi[1].piVal);
    for(int i = 2; i < n-1; ++i)
    {
        fprintf(fptr,"%04d",pi[i].piVal);
    } // End for(int i = 2 ...

    printf("\n");

    fclose(fptr);
*/
    ofstream fout;
    fout.open(fname);
    int digits = 0;
    int ndigits = 0;
    if (fout){
        fout << "# Pi Value with number of decimal digits:" << (n-3) <<endl;
        string first_value = to_string(pi[1].piVal) + ".";
        fout << first_value;
        digits = first_value.length();
        fout << std::fixed << std::setprecision(4) ;
        for(int i = 2; i < n-1; ++i)
        {
           //fprintf(fptr,"%04d",pi[i].piVal);
           if (digits > 80) {
                digits = 4;
                fout << endl;
           } else {
                digits += 4;
           }
           fout << setfill('0')  << std::setw(4) << pi[i].piVal;
           ndigits++;
        } 
        fout << endl;
        fout.close();
        return 0;
    } else {
        cout << "Could not open file: " << fname << endl;
        return 9;
    }

} // End function

int main(int argc, const char * argv[]) {

    cout << "CPP_Calculate_Pi_Rabinowitz_and_Wood_FIT_Modified\n";

    // Get starting time and begin the calculations
    auto start = std::chrono::system_clock::now();
    d0.piVal = 0;
    std::vector <DivisionComponents> pi;
    //pi.push_back(d0);

    // Use the following for comparisons of accuracy
    string FIT_not_Modified = "3.14159265358979323846264338327950288419716939937510582097494459230781";
    string MIT_pi_Selection = "3.1415926535897932384626433832795028841971693993751058209749445923078164";
    string Utah_pi_Selection = "3.141592653589793238462643383279502884197169399375105820974944592307816406286";

    int n = 1000; // Adjust the value of n to obtain the results shown in the table that follows.
    // Actual times will vary.
    /*
    n matches time(s) numbers Matches_as_a_proportion_of_numbers
    20 10 0.0001628 70 0.142857143
    200 66 0.002678 790 0.083544304
    2000 608 0.154313 7990 0.076095119
    10000 3017 3.57054 39990 0.075443861
    20000 6028 14.174 79990 0.07535942
    30000 9039 34.5845 119990 0.075331278
    40000 12049 65.5584 159990 0.075310957
    */

    int digits1 = 10000;

    for(int i = 0; i < ((int)n); i++ )
    //for(int i = 0; i < ((int)n*13); i++ )
    //for(int i = 0; i < ((int)n*4*3.322); i++ )
    {
        pi.push_back(d0);
    }

    div_t d; // C data type for integer division
    d.quot = 0;
    d.rem = 0;
    int t = 0;

    pi[1].piVal = 4;

    for(int i = n; i > 0; --i )
    {
        t = 0;
        for(int j = n-1; j >=0; --j)
        {
            t+= pi[j].piVal * i;
            pi[j].piVal = t % digits1;
            t/= digits1;

        } // End for(int j = ...


        d.quot = 0;
        d.rem = 0;

        for(int j = 0; j < n; ++j )
        {
            d = div(pi[j].piVal + d.rem * digits1, i + i + 1);
            pi[j].piVal = d.quot;
        } // End for(int j = 0 ...


        pi[1].piVal += 2;

    } // End for(int i = n....

    printf("M_PI %2.70f\n",M_PI);
    printf("FIT %s\n",FIT_not_Modified.c_str());
    printf("MIT %s\n",MIT_pi_Selection.c_str());
    printf("Utah %s\n",Utah_pi_Selection.c_str());
    print_Vector(pi, n);
    printf("M_PI %2.70f\n",M_PI);

    const char* file_out = "pi_value.txt";
    cout << "Will write output to a file:" << file_out << endl;
    write_to_File( pi, n, file_out);

    // Check ending time and display duration
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    cout << "finished computation at " << std::ctime(&end_time)
    << "elapsed time: " << elapsed_seconds.count() << "s\n";

    // Following lines are required for Visual Studio 2010
    // std::cout << "Press enter ";
    // std::cin.get(); // for Visual Studio

    cout << "Done\n";
    return 0;
}
