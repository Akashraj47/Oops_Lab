#include <iostream>
using namespace std;
void swap(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Value after swaping" << endl;
	cout << "a = " << a << " b = "<<b<< endl;
}
	
    
int main()
{
	int a = 10,b = 20;
	cout << "Value before swaping" << endl;
	cout << "a = " << a << " b = "<<b<< endl;
	swap(a,b);
	return 0;
}
