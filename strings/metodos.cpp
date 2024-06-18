#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "Olá, Mundo";

    cout << s << endl;
    cout << s[0] << endl;
    cout << s[3] << endl;

    s[0] = 'o';
    cout << s << endl;

    s.at(0) = 'O';
    cout << s.at(6) << endl;
    cout << s << endl;

    cout << s.length() << endl;
    cout << s.size() << endl;

    s.clear();
    cout << s << endl;
    cout << s.empty() << endl;

    cout << s.find('M') << endl;
    cout << s.substr(s.find('M'), s.size() - 1) << endl;

    s.replace(s.find('M'), s.size() - 1, "TreinaWeb");
    cout << s << endl;

    s.insert(s.size(), "!");
    cout << s << endl;

    s.erase(4);
    cout << s << endl;

    string s2 = "teste";
    string s3 = "teste2";

    cout << (s2 == s3) << endl;
    cout << s3.compare(s2) << endl;

    return 0;
}
