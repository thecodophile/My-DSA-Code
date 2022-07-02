// Tutorial of pointer

#include <iostream>
using namespace std;
int main()
{
   /*
   // pointer to int is created and pointed to some garbage address
      int *p; // this is bad practice
      cout << *p << endl;

      int *p = 0;
      cout << *p << endl;
   //  this will through a segmentation fault.because this '0' address is not avaliable in memory

   */
   /*
      int i = 5;
      int *q = &i;
      cout<<q<<endl;
      cout<<*q<<endl;

   // the output of following code is same is above

      int *p = 0;
      // *p = &i //donot do this
      p = &i;
      cout<<p<<endl;
      cout<<*p<<endl;
   */

   int num = 5;
   cout << num << endl;

   // Address of operator-> &

   cout << "Address of num is-> " << &num << endl;

   // Create a pointer
   int *ptr = &num;
   cout << "Value of *ptr is-> " << *ptr << endl;
   cout << "Value of ptr is-> " << ptr << endl;

   // size of pointer is 8 byte
   cout << "size of integer-> " << sizeof(num) << endl;
   cout << "size of pointer-> " << sizeof(ptr) << endl;

   // What type of variable will store in pointer, we should create that type of pointer
   double d = 4.12;
   double *ptrd = &d;
   cout << "Value of *ptrd is-> " << *ptrd << endl;
   cout << "Value of ptrd is-> " << ptrd << endl;
   cout << "size of double-> " << sizeof(d) << endl;
   // whatever type of data is stored in pointer, the pointer allways store address of variable. So the size of poiner will always 8 byte.
   cout << "size of doublePointer-> " << sizeof(ptrd) << endl;

   // Copy a pointer

   // copy ptr pointer to copyPointer
   int *copyPointer = ptr;
   cout << ptr << " - " << copyPointer << endl;
   cout << *ptr << " _ " << *copyPointer << endl;

   return 0;
}