#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string name = "Cleyson";

    cout << name << endl;
    cout << &name << endl;

    string *ptr = &name;

    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = "Cleyson Lima";

    cout << *ptr << endl;
    cout << name << endl;

    return 0;
}
