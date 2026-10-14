#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class caesarcipher
{
private:
    int choice;
    string message;

public:
    void show() // This Is A Startup Menu
    {
        cout << "========== Caesar Cipher ==========" << endl
             << endl;
        cout << "1 : Encrypt Message " << endl;
        cout << "2 : Decrypt Message " << endl;
        cout << "3 : Exit " << endl;
        cout << "<========== ==========>" << endl;
        cout << "Enter Your choice : " << endl;
        cin >> choice;
    }
    void encrypt()
    {
        cout << "Enter Your Message : " << endl; // This function is used for encrypt your message
        cin.ignore();
        getline(cin, message); // getline is for storing full message
        for (int i = 0; i < message.length(); i++)
        {
            if (message[i] >= 'A' && message[i] <= 'Z') // For Capital Letters
            {
                message[i] = message[i] + 3;
                if (message[i] > 'Z')
                {
                    message[i] = message[i] - 26;
                }
            }
            else if (message[i] >= 'a' && message[i] <= 'z') // For Small Letters
            {
                message[i] = message[i] + 3;
                if (message[i] > 'z')
                {
                    message[i] = message[i] - 26;
                }
            }
        }
        cout << "Your Encrypted Message Is : " << message << endl;
        cout << "Remeber Your Encrypted Message For Decrypt it ! " << endl;
    }
    void decrypt()
    {
        cout << "Enter Your Encrypted Message :" << endl;
        cin.ignore();
        getline(cin, message);
        cout << endl;
        for (size_t i = 0; i < message.length(); i++)
        {
            if (message[i] >= 'A' && message[i] <= 'Z')
            {
                message[i] = message[i] - 3;
                if (message[i] < 'A')
                {
                    message[i] = message[i] + 26;
                }
            }
            else if (message[i] >= 'a' && message[i] <= 'z')
            {
                message[i] = message[i] - 3;
                if (message[i] < 'a')
                {
                    message[i] = message[i] + 26;
                }
            }
        }
        cout << "This Is Your Message >>> " << message << endl;
    }
    void manage()
    {
        if (choice == 1)
        {
            encrypt();
        }
        else if (choice == 2)
        {
            decrypt();
        }
        else if (choice == 3)
        {
            cout << "You Are Exit From Caesar Cipher " << endl;
            exit(0);
        }
        else
        {
            cout << "You Are Entering Invalid Number !!!" << endl;
        }
    }
};
int main()
{
    caesarcipher me;
    while (true)
    {
        cout << endl;
        me.show();
        me.manage();
    }

    return 0;
}