#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

int retSum(int a, int b) {
    return a + b;
}

double retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<double>(a) / b;
}

int main() {
    int a, b;

    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    if (!cin) {
        cout << "Virheellinen syöte!" << endl;
        return 1;
    }

    cout << endl << "====" << endl;


    int sum = retSum(a, b);
    cout << a << " + " << b << " = " << sum << endl;

    try {
        double result = retDiv(a, b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Virhe: " << e.what() << endl;
    }

    return 0;
}
