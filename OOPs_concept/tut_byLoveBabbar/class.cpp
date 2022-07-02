#include <iostream>
#include "Hero.cpp"
using namespace std;
class Vilen
{
};
int main()
{
    // static allocation
    Hero santu;
    santu.health = 70;
    santu.level = 'A';
    cout << "size of obj-> " << sizeof(santu) << endl;

    cout << "health is-> " << santu.health << endl;
    // dynamic allocation
    Hero *obj = new Hero;
    obj->health = 80;
    cout << "health is-> " << (*obj).health << endl;
    cout << "health is-> " << obj->health << endl;
    return 0;
}