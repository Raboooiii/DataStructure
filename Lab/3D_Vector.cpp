#include "3D_Vector.h"


int main() {
    Vector3D v1(1, 2, 3);
    Vector3D v2(4, 5, 6);

    Vector3D sum = v1 + v2;
    Vector3D product = v1 * 9;

    cout << "Sum: ";
    sum.display();
    cout <<endl;
    cout << "Product: ";
    product.display();
    cout<<endl;

    return 0;
}