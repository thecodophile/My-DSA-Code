// Macros -> Macro is a pice of code in a program that is replaced by value of macro.
//  Advantage=> 1. Easy to maintain the value.
//              2. Macro is not taking extra space
//              3. Macro is not modyfiable through out the entire program

// Global Variable -> Share variable between fuctions,Global variable's scope is valid through out the entire program
// but we can share variable by using ref variable,then why use globla variable ?
// Note that=> global variable is a bad practice, because it is modyfiable in the program,any body can change the value of the global variable
// so when we need to share variable,we use ref variable.

// inline Functions -> Inline functions are used to reduce the function calls overhead
// Note that => in inline fuction i line code ho toh achha hai,2-3 line ho toh wo compiler ki margi but isse jada line nahi hona cahiye ; 2-3 line se jada loc ho toh comiler fuction ko inline nahi banata

// Tarciatery Operator -> condition?true:false;

// Default Arguments ->

#include <iostream>
using namespace std;

#define PI 3.14 // This is a macro

int score = 15; // Global variable

inline void func(int a, int b)
{
    a++;
    b++;
    cout << a << b << endl;
}
inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{
    /*
    int r = 5;
    double area = PI * r * r;
    // PI = PI +1; //macros can't modyfiable
    cout << "Area-> " << area << endl;
    */

    int a = 1, b = 2;
    func(a, b);

    int ans = 0;
    // if (a>b)
    // {
    //     ans=a;
    // }
    // else{
    //     ans =b;
    // }
    // tarciatary operator -> condition?true:false;
    // ans = (a > b) ? a : b;
    ans = getMax(a, b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    // ans = (a > b) ? a : b;
    ans = getMax(a, b);
    cout << ans << endl;
    return 0;
}