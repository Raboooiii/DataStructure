#include "Matrix.h"
int main() {
    Matrix A({{1, 2, 3} ,{4, 5,6}});
    Matrix B({{7, 8}, {9, 10}, {11, 12}});

    cout << "Matrix A:\n" << A << endl;
    cout << "Matrix B:\n" << B << endl;
    Matrix C = A + B;
    cout << "Sum of A and B:\n" << C << endl;
    Matrix D = A * 2.5;
    cout << "Product of A and scalar 2.5:\n" << D << endl;

    return 0;
}