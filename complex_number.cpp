#include <iostream>
using namespace std;

class Complex {
public:
    int real, imaginary;

    // Constructor with default values
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    // Function to add two complex numbers
    Complex addComplex(Complex c1, Complex c2) {
        Complex result;
        result.real = c1.real + c2.real;
        result.imaginary = c1.imaginary + c2.imaginary;
        return result;
    }
};

int main() {
    int x1, y1, x2, y2, x3, y3;

    // Input for the first complex number
    cout << "Enter the real part of the 1st complex number: ";
    cin >> x1;
    cout << "Enter the imaginary part of the 1st complex number: ";
    cin >> y1;

    Complex c1(x1, y1);
    cout << "1st complex number: " << c1.real << "+i" << c1.imaginary << "\n" << endl;

    // Input for the second complex number
    cout << "Enter the real part of the 2nd complex number: ";
    cin >> x2;
    cout << "Enter the imaginary part of the 2nd complex number: ";
    cin >> y2;

    Complex c2(x2, y2);
    cout << "2nd complex number: " << c2.real << "+i" << c2.imaginary << "\n" << endl;

    // Calculate and display the addition of complex numbers
    Complex c3, c4;
    c4 = c3.addComplex(c1, c2);
    cout << "Addition of complex numbers: " << c4.real << "+i" << c4.imaginary << endl;

    // Calculate and display the multiplication of complex numbers
    x3 = (x1 * x2) - (y1 * y2);
    y3 = (x1 * y2) + (x2 * y1);
    cout << "Multiplication of complex numbers: " << x3 << "+i" << y3 << "\n" << endl;

    return 0;
}

