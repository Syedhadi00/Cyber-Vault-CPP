//for full instruction and guidance see the readme file 
#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
class vault
{
protected:
    string website;
    string username;
    string password;

public:
    int choice;
    vault()
    {
        choice = 0;
        cout << "||=================================||" << endl;
        cout << "||           CYBER VAULT           ||" << endl;
        cout << "||        Secure Account Manager   ||" << endl;
        cout << "||=================================||" << endl
             << endl;
    }
    void menu()
    {
        cout << "1| : Add Account " << endl;
        cout << "2| : View Account " << endl;
        cout << "3| : Search Account " << endl;
        cout << "4| : Delete Account " << endl;
        cout << "5| : Exit " << endl
             << endl;
        cout << "Enter Your Choice = ";
        cin >> choice;
        // Error handling
        if (choice < 1 || choice > 5)
        {
            cout << "Enter Valid Number ..!.." << endl;
        }
    }

    void add()
    {
        cout << "Enter Your Website name :" << endl;
        cin >> website;
        cout << "Enter Your Username :" << endl;
        cin >> username;
        cout << "Enter Your Password :" << endl;
        cin >> password;
        cout << "==========  Account Added Successfully  ==========" << endl;

        ofstream file("info.txt", ios::app); // this is used for

        file << website << endl;
        file << username << endl;
        file << password << endl
             << endl;

        file.close();
    }
    void view_accounts()
    {
        ifstream file("info.txt");

        if (file.is_open() == false)
        {
            cout << "Your File is not existed" << endl;
        }
        else
        {
            while (file >> website >> username >> password)
            {
                cout << endl;
                cout << "Website name :" << website << endl;
                cout << "Your Username is :" << username << endl;
                cout << "Your Password is :" << password << endl
                     << endl;
            }
            file.close();
        }
    }
    void search()
    {
        ifstream file("info.txt");
        string user;
        cout << "Enter your Account Username You need to Find :" << endl;
        cin >> user;
        cout << endl;
        while (file >> website >> username >> password)
        {
            if (user == username)
            {
                cout << "Your Website name is :" << website << endl;
                cout << "Your Username is :" << username << endl;
                cout << "Your Password is :" << password << endl;
                file.close();
                return;
            }
        }
        cout << "(::) Account is not existed (::)" << endl;
    }
    void manage()
    {
        if (choice == 1)
        {
            add();
        }
        else if (choice == 2)
        {
            view_accounts();
        }
        else if (choice == 3)
        {
            search();
        }
        else if (choice == 4)
        {
            del();
        }
        else if (choice == 5)
        {
            exit();
        }
        else
        {
            cout << "You Are Entering Wrong Number Try Aagain" << endl;
        }
    }
    int exit()
    {
        cout << "===== Your Are Exit from CyberVault =====" << endl;
        return 0;
    }
    void del()
    {
        string decide;
        string web;
        bool found = false;
        cout << "Enter Website name you want to delete :";
        cin >> web;

        cout << "Are you sure to Delete Your Details  y / n" << endl;
        cin >> decide;

        if (decide == "y" || decide == "Y")
        {
            ifstream in("info.txt");
            ofstream out("temp.txt");
            while (in >> website >> username >> password)
            {
                if (website != web)
                {

                    out << website << endl;

                    out << username << endl;

                    out << password << endl;
                    cout << endl;
                }
                else
                {
                    found = true;
                }
            }
            in.close();
            out.close();
            remove("info.txt");
            rename("temp.txt", "info.txt");
            if (found)
            {
                cout << "***** Account Deleted Successfully *****" << endl;
            }
            else
            {
                cout << "*** Account not found! Try again ***" << endl;
            }
        }
    }
};

int main()
{
    vault hadi;
    do
    {
        hadi.menu();
        hadi.manage();
    } while (hadi.choice != 5);

    return 0;
}
