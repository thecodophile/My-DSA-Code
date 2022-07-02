#include <iostream>
using namespace std;
void update(int **p2)
{
    // p2 = p2 + 1;
    // no change will hapen

    // *p2 = *p2 + 1;
    // change will hapen

    **p2 = **p2 + 1;
    // change will hapen
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    /*
        cout << "address of i-> " << &i << endl;
        cout << "printing p-> " << p << endl;

        cout << "address of p-> " << &p << endl;
        cout << "pringting p2-> " << p2 << endl;

        cout << "*p2-> " << *p2 << endl;
        cout << "p-> " << p << endl;

        cout << i << endl;
        cout << *p << endl;
        cout << **p2 << endl;

        cout << &i << endl;
        cout << p << endl;
        cout << *p2 << endl;

        cout << &p << endl;
        cout << p2 << endl;

        cout << "Every thing is fine" << endl;
        */

    cout << "before-> " << i << endl;
    cout << "before-> " << p << endl;
    cout << "before-> " << p2 << endl;
    update(p2);
    cout << "after-> " << i << endl;
    cout << "after-> " << p << endl;
    cout << "after-> " << p2 << endl;

    return 0;
}