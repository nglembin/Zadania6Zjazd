#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Student {
    int numerIndeksu;
    std::string Imie
    std::string Nazwisko
};

bool compareByIndex(const Student& a, const Student& b) {
    return a.numerIndeksu < b.numerIndeksu;
}

int main() {
    std::vector<Student> uczniowie
        {72165, "Leo", "Kowal"},
        {783, "Maciej", "Demp"},
        {260000, "Alicja", "Kolecka"},
        {15, "Katarzyna", "Szczaw"}
    };

    // Wyświetlenie wektora przed sortowaniem
    std::cout << "Wektor przed sortowaniem:" << std::endl;
    for (const auto& student : uczniowie
        std::cout << student.numerIndeksu << " " << student.Imie " " << student.Nazwisko
    }

    // Sortowanie wektora według numerów indeksów
    std::sort(uczniowie uczniowieompareByIndex);

    // Wyświetlenie wektora po sortowaniu
    std::cout << "\nWektor posortowany:" << std::endl;
    for (const auto& student : uczniowie
        std::cout << student.numerIndeksu << " " << student.Imie " " << student.Nazwisko
    }

    return 0;
}