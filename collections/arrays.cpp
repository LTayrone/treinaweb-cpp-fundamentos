#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // string names[4];

    // names[0] = "Cleyson";
    // names[1] = "Elton";
    // names[2] = "Amauri";
    // names[3] = "Wesley";

    // cout << names[0] << endl;
    // cout << names[1] << endl;
    // cout << names[2] << endl;
    // cout << names[3] << endl;

    // names[3] = "Felipe";
    // cout << names[3] << endl;

    string names[] = {"Cleyson", "Elton", "Amauri", "Wesley"};
    // cout << names[0] << endl;
    // cout << names[1] << endl;
    // cout << names[2] << endl;
    // cout << names[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << names[i] << endl;
    }

    cout << "For Each" << endl;

    for (string name : names)
    {
        cout << name << endl;
    }

    return 0;
}
