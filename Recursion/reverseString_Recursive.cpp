// Reverse String using Recursion

#include <iostream>
using namespace std;
void reverse(string &str, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;
    return reverse(str, s, e);
}
int main()
{
    string name = "abcde";
    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}

/*
// Question -> solve the above problem ,but use only single pointer.

#include <iostream>
using namespace std;
void reverse(string &str, int s)
{
    if (s > (str.length() - 1) / 2)
    {
        return;
    }
    swap(str[s], str[str.length() - 1 - s]);
    s++;
    return reverse(str, s);
}
int main()
{
    string name = "abcdefg";
    // cout << name.length();
    // cout << (5 - 1) / 2;
    reverse(name, 0);
    cout << name << endl;
    return 0;
}
*/