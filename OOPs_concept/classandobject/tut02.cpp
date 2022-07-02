// Nesting of member function

#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read()
    {
        cout << "Enter a binary number-> ";
        cin >> s;
    }
    void chk_bin()
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << endl
                     << "Incorrect binary nuber format... the program will quit";
                exit(0);
            }
        }
    }
    void ones()
    {
        chk_bin();
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
    }
    void display()
    {
        ones();
        cout << endl
             << "The 1's compliment fo the above binary number is-> " << s;
    }
};

int main()
{
    binary b;
    b.read();
    b.display();
    return 0;
}