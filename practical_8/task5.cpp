#include<iostream>
using namespace std;
int fact(int n)
{
	if(n == 1)
	{
	 return 1;
	}
	n = n*(fact(n-1));
}	
	
int main()
{
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;
    int res = fact(n);
    cout << "factorial is: "<<res<<endl;
    return 0;
 }
