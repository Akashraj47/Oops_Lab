#include <iostream>
using namespace std;
int main()
{
	int *p = {10,20,30};
	cout << *p << endl;
	p++;
	cout << *p << endl;
	return 0;
}
