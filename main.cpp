#include <iostream>
using namespace std;

int main() {
    cout << "Masukkan tipe suhu (C/F/R)" << endl << ">>";

    string temp_type;
    cin >> temp_type;

    double temp_input;
    string temp_output;

    if (temp_type == "C" || temp_type == "c") {
        cout << "Masukkan nilai suhu dalam celsius" << endl << ">>";
        cin >> temp_input;

        double fahrenheit = temp_input * 9.0 / 5.0 + 32;
        double reamur = temp_input * 4.0 / 5.0;

        temp_output = "Hasil:\nFahrenheit = " + to_string(fahrenheit) + "\nReamur = " + to_string(reamur) + "\n";
    } else if (temp_type == "F" || temp_type == "f") {
        cout << "Masukkan nilai suhu dalam fahrenheit" << endl << ">>";
        cin >> temp_input;

        double celsius = (temp_input - 32) * 5.0 / 9.0;
        double reamur = celsius * 4.0 / 5.0;

        temp_output = "Hasil:\ncelsius = " + to_string(celsius) + "\nReamur = " + to_string(reamur) + "\n";
    } else if (temp_type == "R" || temp_type == "r") {
        cout << "Masukkan nilai suhu dalam reamur" << endl << ">>";
        cin >> temp_input;

        double celsius = temp_input * 5.0 / 4.0;
        double fahrenheit = celsius * 9.0 / 5.0 + 32;

        temp_output = "Hasil:\ncelsius = " + to_string(celsius) + "\nfahrenheit = " + to_string(fahrenheit) + "\n";
    } else {
        cout << "Masukkan tipe suhu dengan benar!" << endl;
        main();
    }

    cout << temp_output;
}
