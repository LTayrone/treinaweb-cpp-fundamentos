#include<iostream>
#include<list>
#include<map>
#include <clocale>

using namespace std;

void showMenu(); // Mostra o menu
void getChoice(int &choice); // Pega a escolha do usuário
void addContact(list<map<string, string>> &contacts); // Adiciona um contato
void listContacts(list<map<string, string>> contacts); // Lista os contatos
void removeContact(list<map<string, string>> &contacts); // Remove um contato


int main()
{
    // Configuração geral
    setlocale(LC_ALL, "portuguese");


    int choice = 0;
    list<map<string, string>> contacts;

    do{
        showMenu();
        getChoice(choice);

        switch (choice)
        {
        case 1:
            addContact(contacts);
            break;

        case 2:
            listContacts(contacts);
            break;
        case 3:
            removeContact(contacts);
            break;
        case 0:
            cout << "Saindo..." << endl;
            break;

        default:
            cout << "Opção inválida" << endl;
            break;
        }

        cout << endl;

        } while ( choice != 0);
    
    return 0;
}

void showMenu()
{
    cout << " ####### Agenda #######" << endl;
    cout << "1. Adicionar contato" << endl;
    cout << "2. Listar contatos" << endl;
    cout << "3. Remover contato" << endl;
    cout << "0. Sair" << endl;
};

void getChoice(int &choice)
{
    cout << "> ";
    cin >> choice;
};

void addContact(list<map<string, string>> &contacts)
{
    map<string, string> contact;
    string name, email, phone;

    cin.ignore();

    cout << "Nome: ";
    getline(cin, name);

    cout << "Email: ";
    getline(cin, email);

    cout << "Telefone: ";
    getline(cin, phone);

    contact["name"] = name;
    contact["phone"] = phone;
    contact["email"] = email;

    contacts.push_back(contact);
};

void listContacts(list<map<string, string>> contacts)
{
    for (map<string, string> contact : contacts)
    {
        cout << contact["name"] << ", " << contact["email"] << ", " << contact["phone"] << endl;
    }
};

void removeContact(list<map<string, string>> &contacts)
{
    string name;
    bool founded = false;

    cin.ignore();

    cout << "Nome: ";
    getline(cin, name);

    for (map<string, string> contact : contacts)
    {
        if (contact["name"] == name)
        {
            founded = true;
            contacts.remove(contact);
            break;
        }
    }

    cout <<  (founded ? "Contato removido" : "Contato não encontrado") << endl;
};

