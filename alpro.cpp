#include <iostream>

using namespace std;

int main() {
    double num1, num2, hasil;
    char op;

    // Input data
    cout << "=== Kalkulator Sederhana C++ ===" << endl;
    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    // Percabangan untuk operasi
    switch(op) {
        case '+':
            hasil = num1 + num2;
            break;
        case '-':
            hasil = num1 - num2;
            break;
        case '*':
            hasil = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                hasil = num1 / num2;
            else {
                cout << "Error! Pembagian dengan nol." << endl;
                return 0;
            }
            break;
        default:
            cout << "Operator tidak valid!" << endl;
            return 0;
    }

    // Output hasil
    cout << "Hasil: " << num1 << " " << op << " " << num2 << " = " << hasil << endl;

    return 0;
}
