#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string a;
	int flag = 0;
	cout << "Enter a string"<<endl;
	getline(cin,a);
	int s1= (a.length());
	if(s1 % 2 != 0)
	{
		s1 =( s1/2)+1;
	}
	else
	{
		s1 =s1/2;
	}
	
	for(int i =0;i<s1;i++)
	{
		if(a[i] == a[((a.length())-1)-i])
		{
			flag = 0;
		}
		else{
			flag =1;
			break;
			}
	}
	if( flag == 0)
	{
	 	cout << "Palindrome" << endl;
	 }
	 else
	 {
	 	 cout << "Not Palindrome" << endl;
	 	 }
	return 0;
	}
