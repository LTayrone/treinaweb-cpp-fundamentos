#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Conjunção - E lógico - &&
    cout << "Conjunção" << endl;
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    // Disjunção - OU lógico - ||
    cout << "Disjunção" << endl;
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    // Negação - NÃO lógico - !
    cout << "Negação" << endl;
    cout << (!true) << endl;
    cout << (!false) << endl;

    return 0;
}
