#include <iostream>
// Include Stack header file
#include <stack>

using namespace std;
int main()
{
    // stack use LIFO method
    
    stack<string> s;
    s.push("Somnath");
    s.push("Dey");
    s.push("Santu");

    cout << "Size of stack: " << s.size() << endl;
    cout << "Top element : " << s.top() << endl;

    s.pop();

    cout << "Top element : " << s.top() << endl;

    cout << "Empty or not : " << s.empty() << endl;

    return 0;
}