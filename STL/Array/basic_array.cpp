#include <iostream>

// To use array STL must include this header file
#include <array>

using namespace std;
int main()
{
    int basic[4] = {1, 2, 3, 4};

    // STL array initialization
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Elements at 2nd Index : " << a.at(2) << endl;
    cout << "Empty or not : " << a.empty() << endl;
    cout << "Firsts element : " << a.front() << endl;
    cout << "Last element : " << a.back() << endl;

    return 0;
}