#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
class magnitude{
    public:
    virtual float Calculate() = 0;
    bool is_greater{magnitude<T>& obj}
    {
        return {this->Calculate() > obj.Calculate()};
    }
    virtual ~magnitude() {}
};

class Vector3D: public magnitude<Vector3D> {
    public:
    int x,y,z;
    friend istream& operator>>(istream& is, Vector3D& obj){
        cout<<"Enter X = ";
        is >> obj.x;
        cout<<"Enter Y = ";
        is >> obj.y;
        cout<<"Enter Z = ";
        is >> obj.z;
        return is;
    }
    float Calculate(){
        return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    }
};

class Complex: public magnitude<Complex> {
public:
    double real, imaginary;
    friend istream& operator>>(istream& is, Complex& obj){
        cout<<"Enter Real = ";
        is >> obj.real;
        cout<<"Enter Imaginary = ";
        is >> obj.imaginary;
        return is;
    }
    float Calculate()  {
        return sqrt(real * real + imaginary * imaginary);
    }
};

