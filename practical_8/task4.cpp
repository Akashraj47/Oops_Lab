#include<iostream>
using namespace std;
int fact(int n)
{
	int res = 1;
	while(n >= 1)
	{
		res = res*n;
		n--;
	}
	return res;
}
int main()
{
    
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
     int res = fact(n);
     cout << "factorioal is "<<res << endl;
    return 0;
 }
