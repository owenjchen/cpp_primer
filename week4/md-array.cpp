#include <iostream>
using namespace std;

// You must tell the function the bound of an array,
// otherwise, elements cannot be accessed
// if the array is a variable-length one, it may be difficult to know the bound
void init_2d_array(float mat[][4], size_t rows, size_t cols)
{
    for (int r = 0; r < rows; r++)
        for(int c = 0; c < cols; c++)
            mat[r][c] =  r * c;
}

void print_2d_array(float *mat[], size_t rows, size_t cols)
{
    for (int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++)
            cout << mat[r][c];
        cout << endl;
    }
}

int main()
{
    float mat1[2][3] = {{1.1,1.2,1.3}, {2.4,2.5,2.6}};

    int rows = 5;
    int cols = 4;
    //float mat2[rows][cols]; //uninitialized array
    float mat2[rows][4]; //uninitialized array
    print_2d_array(mat1, 2, 3);
    print_2d_array(mat2, rows, cols);

    //initialize mat 2
    init_2d_array(mat2, rows, cols);
    print_2d_array(mat2, rows, cols);
    for (int r = 0; r < rows; r++)
        for(int c = 0; c < cols; c++)
            mat2[r][c] =  r * c;

   print_2d_array(mat2, rows, cols);
}