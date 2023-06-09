//net user /add user1 user1

#include <iostream>
#include<fstream>

using namespace std;

int main()
{

    ofstream zapis("konta.bat");
    for(int i =0 ; i<16 ; i++)
        zapis << "net user /add Student"<< i << "Student" << i << endl;
    zapis << "echo Przekaż 1 złoty na schonisko - Pozdrawiam Damian Potoczny"<< endl;
    zapis.close();

    system("pause");
    return 0;
}