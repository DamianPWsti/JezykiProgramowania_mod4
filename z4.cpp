#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int a,b;
    ifstream odczyt("dane.txt");
    if(!odczyt)
    {
        cout << "Pliku nie można otworzyć";
        getchar();
        return 1;
    }
    odczyt >> a >> b;
    odczyt.close();
    cout << "Pobrane dane: " << a << " " << b << endl;

    system("pause");
    return 0;
}