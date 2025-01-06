#include <iostream>
#include <string>
using namespace std;

struct uczen {
    string imie;
    int oceny[4];
};

int main() {
    const int num_uczniowie = 6;
    const int num_przedmioty = 4;
    string przedmioty[num_przedmioty] = {"informatyki", "matematyki", "biologii", "języka polskiego"};
    uczen uczniowie[num_uczniowie];

    for (int i = 0; i < num_uczniowie; i++) {
        cout << "Podaj imię ucznia " << i + 1 << ": ";
        cin >> uczniowie[i].imie;
        for (int j = 0; j < num_przedmioty; j++) {
            cout << "Podaj ocenę z " << przedmioty[j] << ": ";
            cin >> uczniowie[i].oceny[j];
        }
    }

    int uczenNumber, subjectNumber;
    while (true) {
        cout << "\nPodaj numer ucznia (1-" << num_uczniowie << ", 0 aby zakończyć): ";
        cin >> uczenNumber;
        if (uczenNumber == 0) {
            break; 
        }
        if (uczenNumber < 1 || uczenNumber > num_uczniowie) {
            cout << "Nieprawidłowy numer ucznia. Spróbuj ponownie.\n";
            continue;
        }

        cout << "Podaj numer przedmiotu (1-" << num_przedmioty << "): ";
        cin >> subjectNumber;
        if (subjectNumber < 1 || subjectNumber > num_przedmioty) {
            cout << "Nieprawidłowy numer przedmiotu. Spróbuj ponownie.\n";
            continue;
        }

        cout << "Uczeń " << uczniowie[uczenNumber - 1].imie
             << " otrzymał ocenę " << uczniowie[uczenNumber - 1].oceny[subjectNumber - 1]
             << " z " << przedmioty[subjectNumber - 1] << ".\n";
    }

    cout << "Koniec programu.\n";
    return 0;
}
