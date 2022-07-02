// pointer with fuction

#include <iostream>
using namespace std;
void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}
void update(int *p)
{
    // p = p + 1;
    // cout << "inside update-> " << p << endl;
    *p = *p + 1;
    cout << "inside update-> " << *p << endl;
}

int getSum(int arr[], int n)
{
    // if function k ander int *arr pass karu toh vi same hoga.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i[arr];
        // same as sum+= arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    print(p);

    cout << "before-> " << p << endl;
    update(p);
    cout << "after-> " << p << endl;
    cout << "inside main-> " << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum is-> " << getSum(arr, 5) << endl;
    cout << "Sum is-> " << getSum(arr + 2, 3) << endl;
    return 0;
}