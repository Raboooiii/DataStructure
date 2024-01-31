#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& obj) const {
        return Complex(real + obj.real, imaginary + obj.imaginary);
    }

    Complex operator*(const Complex& obj) const {
        return Complex(
            real * obj.real - imaginary * obj.imaginary,
            real * obj.imaginary + imaginary * obj.real
        );
    }

    Complex operator-() const {
        return Complex(-real, -imaginary);
    }

    void display() const {
        cout << real << " + " << imaginary << "i";
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, -1);

    Complex sum = c1 + c2;
    Complex product = c1 * c2;
    Complex complement = -c1;

    cout << "Sum: ";
    sum.display();
    cout << endl;

    cout << "Product: ";
    product.display();
    cout << endl;

    cout << "Complement of c1: ";
    complement.display();
    cout << endl;

    return 0;
}
