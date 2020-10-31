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
    
      int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
 for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  

    return 0;
}
