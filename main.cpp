#include <iostream>
#include <limits>
using namespace std;

int main() {
    double input;
    int conv;

    while (true) {
        cout << "Masukkan besar suhu (dalam Celsius, Fahrenheit, atau Reamur) >> "; 
        while (!(cin >> input)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input tidak valid! Silakan masukkan angka yang benar: ";
        }
        
        cout << endl;

        cout << "Pilih metode konversi:\n" << 
        "1. Celsius ke Fahrenheit dan Reamur\n" <<
        "2. Fahrenheit ke Celsius dan Reamur\n" <<
        "3. Reamur ke Celsius dan Fahrenheit\n" <<
        "0. Keluar\n" <<
        ">> "; 

        while (!(cin >> conv) || conv < 0 || conv > 3) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Pilihan tidak valid! Silakan pilih 1, 2, 3, atau 0 untuk keluar: ";
        }
        
        cout << endl;

        switch (conv) {
            case 1:
                {
                    double celsius = input;
                    double fahrenheit = celsius * 9.0 / 5.0 + 32;
                    double reamur = celsius * 4.0 / 5.0;
                    cout << "Konversi dari Celsius ke Fahrenheit dan Reamur\nCelsius = " << celsius << endl << "Fahrenheit = " << fahrenheit << endl << "Reamur = " << reamur << endl << endl;
                }
                break;
            case 2:
                {
                    double fahrenheit = input;
                    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
                    double reamur = celsius * 4.0 / 5.0;
                    cout << "Konversi dari Fahrenheit ke Celsius dan Reamur\nFahrenheit = " << fahrenheit << endl << "Celsius = " << celsius << endl << "Reamur = " << reamur << endl << endl;
                }
                break;
            case 3: 
                {
                    double reamur = input;
                    double celsius = 5 * reamur / 4;
                    double fahrenheit = celsius * 9.0 / 5.0 + 32;
                    cout << "Konversi dari Reamur ke Celsius dan ke Fahrenheit\nReamur = " << reamur << endl << "Celsius = " << celsius << endl << "Fahrenheit = " << fahrenheit << endl << endl;
                }
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                return 0;
        }
    }

    return 0;
}
