#include "RelationalOperators.h"

int main() {
    Vector3D v1,v2;

    cin>>v1;
    cin>>v2;

    cout << "Vector magnitude comparison: "<< endl;
    if (v1.is_greater(v2))
        {cout << "Vector 1 is greater."<< endl;}
    else 
        {cout << "Vector 2 is greater."<< endl;}

    Complex c1,c2;

    cin>>c1;
    cin>>c2;

    cout << "Complex magnitude comparison: "<< endl;
    if (c1.is_greater(c2))
        cout << "Complex 1 is greater."<< endl;
    else 
        cout << "Complex 2 is greater."<< endl;

    return 0;
}