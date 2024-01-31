#include <iostream>
using namespace std;

class Vector3D {
private:
    double x, y, z;

public:
    Vector3D(double a = 0, double b = 0, double c = 0) : x(a), y(b), z(c) {}

    Vector3D operator+(const Vector3D& obj) 
    {
        Vector3D sum;
        sum.x = this->x + obj.x;
        sum.y = this->y + obj.y;
        sum.z = this->z + obj.z;
        return sum;
    }

    Vector3D operator*(double scalar)  
    {
        Vector3D product;
        product.x = this->x * scalar;
        product.y = this->y * scalar;
        product.z = this->z * scalar;
        return product;
    }
        void display() const {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }
};