#include <iostream>
#include <vector>
using namespace std;
class Matrix 
{
private:
    vector<vector<double>> data;

public:
    Matrix(const vector<vector<double>>& _data) : data(_data) {}

    friend ostream& operator<<(ostream& os, const Matrix& m) {
        for (const auto& row : m.data) {
            for (double element : row) {
                os << element << " ";
            }
            cout << endl;
        }
        return os;
    }

    Matrix operator+(const Matrix& other) const {
        vector<vector<double>> result;
        for (size_t i = 0; i < data.size(); ++i) {
            vector<double> row;
            for (size_t j = 0; j < data[i].size(); ++j) {
                row.push_back(data[i][j] + other.data[i][j]);
            }
            result.push_back(row);
        }
        return Matrix(result);
    }

    Matrix operator*(double scalar) const {
        vector<vector<double>> result;
        for (size_t i = 0; i < data.size(); ++i) {
            vector<double> row;
            for (size_t j = 0; j < data[i].size(); ++j) {
                row.push_back(data[i][j] * scalar);
            }
            result.push_back(row);
        }
        return Matrix(result);
    }
};
