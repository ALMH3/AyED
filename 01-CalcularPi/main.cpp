#include <iostream>

using namespace std;

int main() {
    double pi = 0.0;
    double sign = 1.0;
    double denominator = 1.0;

    int iter = 0;
    double precision = 0.000001; // Precisión requerida: 6 decimales

    while (true) {
        pi += sign / denominator;
        sign *= -1.0;
        denominator += 2.0;
        iter++;

        // Comprobar si se ha alcanzado la precisión requerida
        if (iter % 1000000 == 0) {
            if (pi * 4.0 - 3.141592 < precision) {
                break;
            }
        }
    }
    pi *= 4.0;
    cout << fixed;
    cout << "El valor de pi es: " << pi << endl;

    return 0;
}
