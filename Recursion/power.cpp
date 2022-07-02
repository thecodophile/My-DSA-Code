// Power of digit

#include <iostream>
using namespace std;
int power(int num, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return num * power(num, n - 1);
}
int main()
{
    int num, n;
    cout << "Enter the number and power digit -> ";
    cin >> num >> n;
    int ans = power(num, n);
    cout << ans << endl;
    return 0;
}