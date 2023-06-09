#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int a, suma;
    suma = 0;
    ifstream odczyt("liczby1.txt");
    if(!odczyt)
    {
        cout << "Pliku nie można otworzyć";
        getchar();
        return 1;
    }

    ofstream zapis("liczby2.txt");
    zapis << "WSTI" << " --GRUPA-- " << 2 << "DZI " << "Damian" << " " << "Potoczny" << endl;
    zapis << "Modul 3 "<< "Operacje na plikach " << "Zadanie 6"<< endl;
    zapis << "Języki programowania" << endl;
    

    while(!odczyt.eof() && odczyt >> a)
    {
        if(!(a%2))
        {
            zapis << a << ", ";
            cout << "Liczba parzysta: " << a << endl;
        }           
    };
    odczyt.close();
    zapis.close();
    system("pause");
    return 0;
}