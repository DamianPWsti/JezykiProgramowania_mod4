#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    string linia;
    int suma=0;
    ifstream odczyt("tekstowy.txt");
    if(!odczyt)
    {
        cout << "Pliku nie można otworzyć";
        getchar();
        return 1;
    }
    while(!odczyt.eof())
    {
        if(odczyt >> linia)
            cout << linia << endl;
    };
    odczyt.close();
}