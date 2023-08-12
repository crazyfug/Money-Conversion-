#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double amount;
    char choice;

    const double usd_to_eur = 0.91;
    const double usd_to_gbp = 0.79;
    const double usd_to_jpy = 144.91;
    const double usd_to_cad = 1.34;
    const double usd_to_aud = 1.54;
    const double usd_to_cny = 7.24;
    const double usd_to_mxn = 17.01;
    const double usd_to_npr = 132.92;

    
cout << "------Welcome to Money Conversion------" << endl;
cout << "Enter an amount in US Dollars (USD): ";
cin >> amount;

    cout << "Select the currency to convert to:\n";
    cout << "Euros (E) | British Pounds (B) | Japanese Yen (J) | Canadian Dollars (C) | Mexican Pesos (M) | Chinese Yan (Y) | Nepalese Rupee (N) : ";
    cin >> choice;

    if (choice == 'E' || choice == 'e') {
        cout << "Converted amount in Euros (EUR): " << fixed << setprecision(2) << amount * usd_to_eur << endl;
    } else if (choice == 'N' || choice == 'n') {
        cout << "Converted amount in Nepalese Rupee (NPR): " << fixed << setprecision(2) << amount * usd_to_npr << endl;
    } else if (choice == 'B' || choice == 'b') {
        cout << "Converted amount in British Pounds (GBP): " << fixed << setprecision(2) << amount * usd_to_gbp << endl;
    } else if (choice == 'J' || choice == 'j') {
        cout << "Converted amount in Japanese Yen (JPY): " << fixed << setprecision(2) << amount * usd_to_jpy << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Converted amount in Canadian (CAD): " << fixed << setprecision(2) << amount * usd_to_cad << endl;
    } else if (choice == 'Y' || choice == 'y') {
        cout << "Converted amount in Chinese Yuan (CYN): " << fixed << setprecision(2) << amount * usd_to_cny << endl;
    } else if (choice == 'M' || choice == 'm') {
        cout << "Converted amount in Mexican Pesos (MXN): " << fixed << setprecision(2) << amount * usd_to_mxn << endl;
    } else {
        cout << "Invalid choice. Please select a valid currency option.\n";
    }

    return 0;
}
