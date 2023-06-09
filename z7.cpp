#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    char a;
    int suma=0;
    ifstream odczyt("tekst.txt");
    if(!odczyt)
    {
        cout << "Pliku nie można otworzyć";
        getchar();
        return 1;
    }
    while(!odczyt.eof())
    {
        odczyt.get(a);
        suma++;
    };
    cout << "Odczytanych znaków zostało: " << suma << endl;
    odczyt.close();
}