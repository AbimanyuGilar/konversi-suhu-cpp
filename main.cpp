#include <iostream>
using namespace std;

int main() {
    string output;
    int conv;
    double n;
    double celsius;
    double fahrenheit;
    double reamur;

    cout << "Masukkan besar suhu >> "; 
    cin >> n; cout << endl;

    while (true) {
    cout << "pilih metode convert:\n" << 
    "1. celsius ke fahrenheit dan reamur\n" <<
    "2. fahrenheit ke celsius dan reamur\n" <<
    "3. reamur ke celsius dan fahrenheit\n" <<
    ">> "; 

    cin >> conv; cout << endl;

    switch (conv) {
        case 1:
            celsius = n;
            fahrenheit = celsius * 9.0 / 5.0 + 32;
            reamur = celsius * 4.0 / 5.0;
            cout << "Konversi dari Celsius ke Fahrenheit dan ke Reamur\nCelsius = " << celsius << endl << "Fahrenheit = " << fahrenheit << endl << "Reamur = " << reamur << endl << endl;
            break;
        case 2:
            fahrenheit = n;
            celsius = (n - 32) * 5.0 / 9.0;
            reamur = celsius * 4.0 / 5.0;
            cout << "Konversi dari Fahrenheit ke Celsius dan ke Reamur\nFahrenheit = " << fahrenheit << endl << "Celsius = " << celsius << endl << "Reamur = " << reamur << endl << endl;
            break;
        case 3: 
            reamur = n;
            celsius = 5 * n / 4;
            fahrenheit = celsius * 9.0 / 5.0 + 32;
            cout << "Konversi dari Reamur ke Celsius dan ke Fahrenheit\nReamur = " << reamur << endl << "Celsius = " << celsius << endl << "Fahrenheit = " << fahrenheit << endl << endl;
            break;
        default:
            cout << "***Masukkan metode convert dengan benar!***" << endl << endl;
            continue;
            break;
        }

        break;
    }

    return 0;
}
