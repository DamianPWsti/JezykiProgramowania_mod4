#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream zapis("info.txt");
    zapis << "WSTI" << " --GRUPA-- " << 2 << "DZI " << "Damian" << " " << "Potoczny" << endl;
    zapis << "Modul 3 "<< "Operacje na plikach " << "Zadanie 1"<< endl;
    zapis << "Języki programowania" << endl;
    zapis.close();

    zapis.open("info.txt", ios::app);
    zapis << "Modul 3 "<< "Operacje na plikach " << "Zadanie 2"<< endl;
    zapis << "Języki programowania" << endl;

    system("pause");
    return 0;
}