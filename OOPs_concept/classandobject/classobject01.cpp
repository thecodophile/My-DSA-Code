// Class tutorial

#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void getData(int a1, int b1, int c1);

    void printData()
    {
        cout << "The value of a is-> " << a << endl;
        cout << "The value of b is-> " << b << endl;
        cout << "The value of c is-> " << c << endl;
        cout << "The value of d is-> " << d << endl;
        cout << "The value of e is-> " << e << endl;
    }
};
void Employee::getData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee somnath;
    somnath.d = 40;
    somnath.e = 50;
    somnath.getData(10, 20, 30);
    somnath.printData();

    return 0;
}