#include <iostream>
#include <list>
#include <map>

using namespace std;

void show_menu()
{
    cout << "============= Menu =============" << endl;
    cout << "1. Novo contato" << endl;
    cout << "2. Listar contatos" << endl;
    cout << "3. Remover contato" << endl;
    cout << "0. Sair" << endl;
}

void get_choice(int &choice)
{
    cout << "> ";
    cin >> choice;
}

void add_contact(list<map<string, string>> &contacts)
{
    string name, email, phone;

    cin.ignore();

    cout << "Nome: ";
    getline(cin, name);
    cout << "Email: ";
    getline(cin, email);
    cout << "Telefone: ";
    getline(cin, phone);

    map<string, string> contact;
    contact["name"] = name;
    contact["email"] = email;
    contact["phone"] = phone;

    contacts.push_back(contact);
}

void list_contacts(list<map<string, string>> contacts)
{
    for (map<string, string> contact : contacts)
    {
        cout << contact["name"] << ", " << contact["email"] << ", " << contact["phone"] << endl;
    }
}

void remove_contact(list<map<string, string>> &contacts)
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

    string message = founded ? "Contato removido" : "Contato não econtrado";
    cout << message << endl;
}

int main(int argc, char const *argv[])
{
    int choice = 0;
    list<map<string, string>> contacts;

    do
    {
        show_menu();
        get_choice(choice);

        switch (choice)
        {
        case 1:
            add_contact(contacts);
            break;
        case 2:
            list_contacts(contacts);
            break;
        case 3:
            remove_contact(contacts);
            break;
        case 0:
            cout << "Até mais, e obrigado pelos peixes" << endl;
            break;
        default:
            cout << "Opção inválida" << endl;
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}
