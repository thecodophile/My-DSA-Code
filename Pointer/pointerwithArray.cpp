// Pointer with int array

#include <iostream>
using namespace std;
int main()
{
  /*
  int arr[10] = {23, 2, 3, 5};
  cout << "Address of first memory block is-> " << arr << endl;
  cout << "Address of first memory block is-> " << &arr[1] << endl;
  cout << "Address of first memory block is-> " << *arr << endl;
  cout << "Address of first memory block is-> " << *arr + 1 << endl;
  cout << "Address of first memory block is-> " << *(arr + 1) << endl;
  cout << "Address of first memory block is-> " << *(arr + 2) << endl;
  cout << "Address of first memory block is-> " << *(arr) + 1 << endl;
  cout << "Address of first memory block is-> " << arr[2] << endl;
  cout << "Address of first memory block is-> " << *(arr + 2) << endl;
  cout << "Address of first memory block is-> " << 2 [arr] << endl;
  cout << "Address of first memory block is-> " << *(2 + arr) << endl;

  // formula->  arr[i] = *(arr + i)      or     i[arr] = *(i + arr)
  cout << "size of array -> " << sizeof(arr) << endl;
  int *p = &arr[0];
  cout << "value at the pointer-> " << *p << endl;
  cout << "size of pointer -> " << sizeof(p) << endl;
  cout << "size of pointer -> " << sizeof(*p) << endl;
  cout << "size of pointer -> " << sizeof(&p) << endl;



  int a[20] = {1, 2, 3, 4, 5};
  cout << &a << " " << &a[0] << " " << a << endl;
  int *p = &a[0];
  cout << *p << " " << &p << " " << &p[0] << " " << p << endl;
*/

  int arr[10];
  //  ERROR
  // arr = arr+1;
  // int *ptr = &arr[0];
  int *ptr = arr;
  cout << ptr << endl;
  ptr = ptr + 1;
  cout << ptr << endl;

  return 0;
}