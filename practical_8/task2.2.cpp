#include <iostream>
using namespace std;
int main()
{
	int arr[] = {10,20,30};
	int *p;
	cout << *arr <<endl;
	p = arr;
	p++;
	cout << *(p) <<endl;
	return 0;
}
