#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: ";         cin >> imie;
    cout << "Podaj nazwisko: ";     cin >> nazwisko;
    cout << "Podaj nr telefonu: ";  cin >> nr_tel;

    fstream plik;
    plik.open("dane.txt", ios::out); // otworz plik / nazwa pliku na dysku / tryb otwarcia input/output stream out - pokieruj dane do pliku
    // plik.open("dane.txt", ios::out | ios::app); // append - dodaj do istniejacego pliku
    plik << imie << endl; // zapisz imie do pliku
    plik << nazwisko << endl; // zapisz nazwisko do pliku
    plik << nr_tel << endl; // zapisz nr telefonu do pliku
    plik.close();

    return 0;
}
