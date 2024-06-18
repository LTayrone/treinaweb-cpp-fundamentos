#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    double x, y;
    cout << "Primeiro valor: ";
    cin >> x;
    cout << "Segundo valor: ";
    cin >> y;

    double sum = x + y;
    cout << "Soma: " << sum << endl;

    string name;
    cin >> name;

    cout << name << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    cout << name << endl;

    return 0;
}
