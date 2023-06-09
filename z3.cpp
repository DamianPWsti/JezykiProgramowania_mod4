#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    string nazwa;
    cout << "Podaj nazwe pliku" << endl;
    cin >> nazwa;

    ofstream zapis(nazwa);
    zapis << "WSTI" << " --GRUPA-- " << 2 << "DZI " << "Damian" << " " << "Potoczny" << endl;
    zapis << "Modul 3 "<< "Operacje na plikach " << "Zadanie 3"<< endl;
    zapis << "Języki programowania" << endl;
    zapis.close();

    zapis.open("info.txt", ios::app);
    zapis << "Języki programowania" << endl;

    system("pause");
    return 0;
}