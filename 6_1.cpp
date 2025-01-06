#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            count++;
        }
    }

    cout << "Liczba liczb naturalnych nie wiekszych od " << n
         << " podzielnych przez 5, ale nie podzielnych przez 3, wynosi: " << count << endl;

    return 0;
}
