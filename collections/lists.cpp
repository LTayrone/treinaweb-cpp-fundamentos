#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    list<string> names;

    names.push_back("Cleyson");
    names.push_back("Elton");
    names.push_back("Amauri");

    for (string name : names)
    {
        cout << name << endl;
    }

    cout << endl;

    names.push_front("Wesley");

    for (string name : names)
    {
        cout << name << endl;
    }

    cout << endl;

    names.remove("Elton");
    for (string name : names)
    {
        cout << name << endl;
    }

    cout << endl;

    names.reverse();
    for (string name : names)
    {
        cout << name << endl;
    }

    return 0;
}
