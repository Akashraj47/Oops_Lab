#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int *p ,**q;
	p =&a;
	q = &p;
	cout << a << endl;
	return 0;
}
