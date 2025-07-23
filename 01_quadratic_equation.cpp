/*
 * Problem 1: Solve a Quadratic Equation
 * --------------------------------------
 * Write a C++ program to solve the quadratic equation:
 *
 *     (2.1 + k)x² + 2.4x − 4.5 = 0
 *
 * correct to three decimal places, where k = 1.
 */

#include <iostream>
#include <cmath>
#include <iomanip>  // for setprecision

using namespace std;

int main() {
    // Coefficients of the quadratic equation: ax^2 + bx + c = 0
    float a = 2.1 + 1;  // k = 1, so a = 3.1
    float b = 2.4;
    float c = -4.5;
    float discriminant, realPart, imaginaryPart;

    cout << "Solving the equation: (2.1 + 1)x^2 + 2.4x - 4.5 = 0" << endl;

    discriminant = b * b - 4 * a * c;

    cout << fixed << setprecision(3);  // Set output to 3 decimal places

    if (discriminant > 0) {
        // Two distinct real roots
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two distinct real roots: " << root1 << " and " << root2 << endl;
    } 
    else if (discriminant == 0) {
        // Two equal real roots
        float root = -b / (2 * a);
        cout << "Two equal real roots: " << root << endl;
    } 
    else {
        // Two complex (imaginary) roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
        cout << "Two complex roots: ";
        cout << "(" << realPart << " + i" << imaginaryPart << ") and ";
        cout << "(" << realPart << " - i" << imaginaryPart << ")" << endl;
    }

    return 0;
}
