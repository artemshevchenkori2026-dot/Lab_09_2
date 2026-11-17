#include <iostream>
#include "macros.h"

using namespace std;

// Допоміжна функція для можливості підключення Unit-тесту
double calculateW(double x, double y, double z) {
    double w;
    if (z > 5) {
        w = SQR(MAX(x * CUBE(y), x + z));
    }
    else {
        w = MIN(x - y * z, x * y + z);
    }
    return w;
}

int main() {
    double x, y, w;
    double z = Z; // беремо значення константи Z

    cout << "Lab 9.2 (Variant 29). Macros and preprocessor directives" << endl;
    cout << "Current Z (defined in macros.h) = " << z << endl;
    cout << "Input x: "; cin >> x;
    cout << "Input y: "; cin >> y;

    // Умовна компіляція залежно від значення макроса Z
#if Z > 5
    cout << "Compiled branch: Z > 5" << endl;
    w = SQR(MAX(x * CUBE(y), x + z));
#else
    cout << "Compiled branch: Z <= 5" << endl;
    w = MIN(x - y * z, x * y + z);
#endif

    PRINTR(w);

    return 0;
}