#include <iostream>
#include <cmath>
#include <complex> 															
using namespace std;

int main() {
    float a, b, c, d;
    cout << "Enter the coefficient of x^2: ";
    cin >> a;
    cout << "Enter the coefficient of x: ";
    cin >> b;
    cout << "Enter the constant: ";
    cin >> c;

    d = b * b - 4 * a * c;  												// Calculate the discriminant

    if (d > 0) {															// Real and distinct roots
        float r1 = (-b + sqrt(d)) / (2 * a);
        float r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and distinct:\n";
        cout << "Root 1 = " << r1 << "\nRoot 2 = " << r2 << endl;
    } 
    else if (d == 0) {														// Real and equal roots
        float r = -b / (2 * a);
        cout << "Roots are real and equal:\n";
        cout << "Root 1 = Root 2 = " << r << endl;
    } 
    else {																	// Imaginary roots
        complex<float> r1 = complex<float>(-b, sqrt(-d)) / (2 * a);
        complex<float> r2 = complex<float>(-b, -sqrt(-d)) / (2 * a);
        cout << "Roots are imaginary:\n";
        cout << "Root 1 = " << r1 << "\nRoot 2 = " << r2 << endl;
    }

    return 0;
}
