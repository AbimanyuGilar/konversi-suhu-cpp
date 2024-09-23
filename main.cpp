#include <iostream>
using namespace std;

// Deklarasi function konversi
string convert_from_c(double temp_input) {
    double fahrenheit = temp_input * 9.0 / 5.0 + 32;
    double reamur = temp_input * 4.0 / 5.0;

    return "Hasil:\nFahrenheit = " + to_string(fahrenheit) + "\nReamur = " + to_string(reamur) + "\n";
}

string convert_from_f(double temp_input) {
    double celsius = (temp_input - 32) * 5.0 / 9.0;
    double reamur = celsius * 4.0 / 5.0;

    return "Hasil:\ncelsius = " + to_string(celsius) + "\nReamur = " + to_string(reamur) + "\n";
}

string convert_from_r(double temp_input) {
    double celsius = temp_input * 5.0 / 4.0;
    double fahrenheit = celsius * 9.0 / 5.0 + 32;

    return "Hasil:\ncelsius = " + to_string(celsius) + "\nfahrenheit = " + to_string(fahrenheit) + "\n";
}

//Function utama
int main() {
    cout << "Masukkan tipe suhu (C/F/R)" << endl << ">>";

    string temp_type;
    cin >> temp_type;

    double temp_input;
    string temp_output;

    if (temp_type == "C" || temp_type == "c") {
        cout << "Masukkan nilai suhu dalam celsius" << endl << ">>";
        cin >> temp_input;
        temp_output = convert_from_c(temp_input);
    } else if (temp_type == "F" || temp_type == "f") {
        cout << "Masukkan nilai suhu dalam fahrenheit" << endl << ">>";
        cin >> temp_input;
        temp_output = convert_from_f(temp_input);
    } else if (temp_type == "R" || temp_type == "r") {
        cout << "Masukkan nilai suhu dalam reamur" << endl << ">>";
        cin >> temp_input;
        temp_output = convert_from_r(temp_input);
    } else {
        cout << "Masukkan tipe suhu dengan benar!" << endl;
        main();
    }

    cout << temp_output;
}
