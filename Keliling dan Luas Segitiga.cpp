#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double luas;
    double keliling;
    double alas;
    double sisikiri;
    double sisikanan;
    double tinggi;

    cout << "Masukkan panjang alas:"  ;
    cin >> alas;
    cout << "Masukkan panjang sisi kiri:" ;
    cin >> sisikiri;
    cout << "Masukkan panjang sisi kanan:" ;
    cin >> sisikanan;
    cout << "Masukkan tinggi: " ;
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    keliling = alas + sisikiri + sisikanan;
    cout << "Luas segitiga: " ;
    cout << luas << endl;
    cout << "Keliling segitiga: " ;
    cout << keliling << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
