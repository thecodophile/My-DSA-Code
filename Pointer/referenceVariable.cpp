#include <iostream>
using namespace std;
/*
// this is bad practice
// return by reference
int &update3(int n)
{
    int a = n;
    int &ans = a;
    return ans;
}
*/
void update(int n)
{
    n++;
}
void update2(int &n)
{
    n++;
}
int main()
{
    /*
    int i = 5;
    // Create a reference Variable
    // Reference Variable - same memory block; different name
    int &j = i;
    cout << i << endl;
    cout << j << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;

*/
    int n = 5;
    cout << "before-> " << n << endl;
    update(n);
    cout << "after-> " << n << endl;
    cout << "before-> " << n << endl;
    update2(n);
    cout << "after-> " << n << endl;
    return 0;
}