// class tutorial

#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getData(int a, float b);
    void putData()
    {
        cout << "Number-> " << number << endl;
        cout << "Cost-> " << cost << endl;
    }
};
void item::getData(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    cout << "obj creation" << endl;
    item obj;
    obj.getData(100, 199.5);
    obj.putData();

    return 0;
}