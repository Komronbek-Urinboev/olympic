#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;
    cout << "Введите x, y, z: ";
    cin >> x >> y >> z;

    double denominator = atan(x) + atan(z);

    if (fabs(denominator) < 1e-12) {
        cout << "Ошибка: знаменатель близок к нулю!" << endl;
        return 1;
    }

    double numerator = exp(fabs(x - y)) * pow(fabs(x - y), x + y);
    double phi = numerator / denominator + cbrt(pow(x, 6) + pow(log(y), 2));

    cout << "Результат φ = " << phi << endl;
    return 0;
}
