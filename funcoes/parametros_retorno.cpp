#include <iostream>

using namespace std;

void greeting(string name = "Mundo")
{
    cout << "Olá, " << name << endl;
}

void sum(int a, int b)
{
    int result = a + b;
    cout << result << endl;
}

// void sum(double a, double b)
// {
//     double result = a + b;
//     cout << result << endl;
// }

double sum(double a, double b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    greeting("TreinaWeb");
    greeting();
    greeting("Cleyson");

    sum(10, 20);
    double result = sum(10.5, 20.7);
    cout << result << endl;

    return 0;
}
