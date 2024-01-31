#include "Conversion.h"

int main() {
    Distance d1(3.5, 70);
    Distance d2(.2, 30);

    cout << "Distance 1: " << d1 << endl;
    cout << "Distance 2: " << d2 << endl;

    d1 = d2;
    cout << "Distance 1 after assignment: " << d1 << endl;

    return 0;
}
