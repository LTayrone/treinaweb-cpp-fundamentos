#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 10 == 0)
        {
            continue;
        }

        if (i % 17 == 0)
        {
            break;
        }
        cout << i << " ";
    }

    return 0;
}
