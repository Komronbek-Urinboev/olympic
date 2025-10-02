#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z, psi;
    cout << "Введите x, y, z: ";
    cin >> x >> y >> z;

    double part1 = fabs(pow(x, y / x) - cbrt(y / x));
    double numerator = (y - x) * (cos(y) - z / (y - x));
    double denominator = 1 + pow(y - x, 2);

    psi = part1 + numerator / denominator;

    cout.precision(6);
    cout << "Результат ψ = " << psi << endl;
    return 0;
}
