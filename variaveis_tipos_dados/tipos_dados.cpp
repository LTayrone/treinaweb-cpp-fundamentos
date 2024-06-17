#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // int - 4 bytes
    // -2,147,483,648 to 2,147,483,647
    int i1 = 50;
    cout << i1 << endl;
    cout << sizeof(int) << endl;

    // long int - 8 bytes
    long int l1 = 100;
    cout << l1 << endl;
    cout << sizeof(long) << endl;

    // short int - 2 bytes
    short int s1 = 10;
    cout << s1 << endl;
    cout << sizeof(short) << endl;

    // float - 4 bytes
    float f1 = 10.5;
    cout << f1 << endl;
    cout << sizeof(float) << endl;

    // double - 8 bytes
    double d1 = 7.8;
    cout << d1 << endl;
    cout << sizeof(double) << endl;

    // char - 1 byte
    char c1 = 'c';
    cout << c1 << endl;
    cout << sizeof(char) << endl;

    // string
    string str1 = "Cleyson Lima";
    cout << str1 << endl;

    // boolean
    bool b1 = false;
    cout << b1 << endl;
    cout << sizeof(b1) << endl;

    int i2 = -10;
    cout << i2 << endl;

    // 0 to 4,294,967,295
    unsigned int i3 = 20;
    cout << i3 << endl;

    return 0;
}
