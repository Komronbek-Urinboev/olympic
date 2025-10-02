#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z, a;
    cout << "Введите x, y, z: ";
    cin >> x >> y >> z;

    a = pow(2, -x) * sqrt(x + pow(fabs(y), 0.25)) * cbrt(exp(x - 1) / sin(z));

    cout << "Результат a = " << a << endl;
    return 0;
}
