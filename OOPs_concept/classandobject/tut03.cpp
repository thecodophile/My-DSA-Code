// static data members

#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    void getData(int a)
    {
        number = a;
        count++;
    }
    void getCount()
    {
        cout << "Count: ";
        cout << count << endl;
    }
};
int item::count; // defination of static data member

int main()
{
    item a, b, c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);
    cout << "After reading data" << endl;
    a.getCount();
    b.getCount();
    c.getCount();
    return 0;
}