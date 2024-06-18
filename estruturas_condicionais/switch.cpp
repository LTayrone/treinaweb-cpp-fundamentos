#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda-feira" << endl;
        break;
    case 3:
        cout << "Terça-feira" << endl;
        break;
    case 4:
        cout << "Quarta-feira" << endl;
        break;
    case 5:
        cout << "Quinta-feira" << endl;
        break;
    case 6:
        cout << "Sexta-feira" << endl;
        break;
    case 7:
        cout << "Sabado" << endl;
        break;
    default:
        cout << "Dia invalido" << endl;
    }

    return 0;
}
