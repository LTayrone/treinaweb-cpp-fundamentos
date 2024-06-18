#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    // Soma
    int sum = a + b;
    cout << sum << endl;

    // Subtração
    int sub = a - b;
    cout << sub << endl;

    // Multiplicação
    int mult = a * b;
    cout << mult << endl;

    // Divisão
    double div = a / double(b);
    cout << div << endl;

    // Modulo
    int mod = 5 % 2;
    cout << mod << endl;

    // Incremento e Decremento
    a++;
    cout << a << endl;

    a--;
    cout << a << endl;

    cout << ++a << endl;
    cout << a << endl;

    return 0;
}
