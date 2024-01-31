#include <iostream>
using namespace std;

class Distance {
private:
    double meters;
    double centimeters;

public:
    Distance(double m = 0, double cm = 0) : meters(m), centimeters(cm) {}

    friend ostream& operator<<(ostream& os, const  Distance& d)
    {
        os << d.meters << " meters and " << d.centimeters << " centimeters";
        return os;
    }

    void operator=(const Distance& other) {
        meters = other.meters;
        centimeters = other.centimeters;
    }

};


