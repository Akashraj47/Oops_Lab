#include <iostream>
using namespace std;
void swap(int *p,int *q)
{
   int temp;
   temp = *p;
   *p = *q;
   *q = temp;
}
int main()
{
   int a = 10,b = 20;
   cout << "value before swaping " << endl;
   cout << "a = " << a << " b = " << b << endl;
   swap(&a,&b);
   cout << "value afer swaping " << endl;
   cout << "a = " << a << " b = " << b << endl;
   return 0;
}
