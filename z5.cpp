#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    float a, suma;
    suma = 0;
    ifstream odczyt("dane2.txt");
    if(!odczyt)
    {
        cout << "Pliku nie można otworzyć";
        getchar();
        return 1;
    }
    while(!odczyt.eof() && odczyt >> a)
    {
        suma +=a;
    };
    odczyt.close();
    cout << "Suma rowna sia: " << suma << endl;

    system("pause");
    return 0;
}