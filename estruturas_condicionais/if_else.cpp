#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "Você é maior de idade" << endl;
    }
    else if (age >= 16)
    {
        cout << "Você é menor de idade, mas já pode votar" << endl;
    }
    else
    {
        cout << "Você é menor de idade" << endl;
    }

    int time;
    cin >> time;
    string message = (time < 12) ? "Bom dia" : "Boa tarde";

    // if (time < 12)
    // {
    //     message = "Bom dia";
    // }
    // else
    // {
    //     message = "Boa tarde";
    // }

    cout << message << endl;

    cout << "Fim do programa" << endl;

    return 0;
}
