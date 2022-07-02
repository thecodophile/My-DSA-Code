#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    // we know that with char array null character will store; so here the size is 6;
    cout << arr << endl;
    // here print arr first location address
    cout << ch << endl;
    // here print entire content
    char *c = &ch[0];
    cout << *c << " " << c << " " << &c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
    return 0;
}