// Basic pointer arithmetic for better understanding about pointer

#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *ptr = &i;
    cout << *ptr + 1 << endl;
    cout << (*ptr)++ << endl;
    cout << *ptr << endl;
    *ptr = *ptr + 1;
    cout << *ptr << endl;

    cout << ptr << endl;
    cout << ptr++ << endl;
    cout << ptr << endl;

    ptr = ptr + 1;
    cout << ptr << endl;

    cout << *ptr << endl;

    return 0;
}