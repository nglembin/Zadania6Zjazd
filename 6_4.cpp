#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;
    int n;

    cout << "Podaj ciąg znaków: ";
    getline(cin, inputString);

    cout << "Podaj liczbę n (konkatenacja ciągu): ";
    cin >> n;

    string wynik;
    for (int i = 0; i < n; ++i) {
        wynik += inputString;
    }

    cout << "Wynikowa konkatenacja: " << wynik << endl;

    return 0;
}
