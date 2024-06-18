#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string first_name, last_name;

    cout << "Nome: ";
    cin >> first_name;
    cout << "Sobrenome: ";
    cin >> last_name;

    string full_name = first_name + " " + last_name;
    cout << "Nome completo: " << full_name << endl;

    string full_name2 = first_name.append(" ").append(last_name);
    cout << "Nome completo: " << full_name2 << endl;

    return 0;
}
