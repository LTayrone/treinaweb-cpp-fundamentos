#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int min = 1, max = 10;
    int random = (rand() % (max - min + 1) + min);

    int choice, guesses = 0;

    do
    {
        cout << "Qual o seu palpite? ";
        cin >> choice;
        guesses++;

        if (choice != random)
        {
            cout << "Você errou! ";
            string message = (random > choice) ? "Tente um número maior. " : "Tente um número menor. ";
            cout << message;
        }
    } while (choice != random);

    cout << "Você acertou com " << guesses << " palpites" << endl;

    return 0;
}
