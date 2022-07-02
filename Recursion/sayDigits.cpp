// Say digits

#include <iostream>
#include <string>
using namespace std;
void sayDigits(int n, string arr[])
{
    // Base case
    if (n == 0)
    {
        return;
    }
    // processing
    int digit = n % 10;
    n = n / 10;
    // Recursive call
    sayDigits(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"Zero",
                      "One",
                      "Two",
                      "Three",
                      "Four",
                      "Five",
                      "Six",
                      "Seven",
                      "Eight",
                      "Nine"};
    int n;
    cout << "Enter the number-> " << endl;
    cin >> n;
    sayDigits(n, arr);
    return 0;
}