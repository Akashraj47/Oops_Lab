#include <iostream>
using namespace std;
int printseries(int n)
{
	int s;
	if(n == 1)
	{
		return 2;
	}
	s = ((n-1)*(n-1) + (n-1));
	printseries(n-1);
	cout << s << " ";
	return 0;
}	 
int main()
{
   int a;
   cout << "Enter a number"<<endl;
   cin >> a; 
   cout << "Series is :- " ;
   printseries(a);
   return 0;
}
