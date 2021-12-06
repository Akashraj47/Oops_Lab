#include <iostream>
using namespace std;
class a{
	public :
	int k;
};
class b: virtual public a{
public :
	   void display1()
	{
		k = 10;
		cout << "value of k in class b :- " << k << endl;
	}
};
class c: virtual public a{
public :
	   void display2()
	{
		k = 20;
		cout << "value of k in class c :- " << k << endl;
	}
};
class d: public a,public b{
public :
	   void display3()
	{
		K = 30; // erroe if virtual not used;
		cout<<"<<"<<k<<endl;
	}
};
int main()
{
	b obj1;
	c obj2;
	d obj3;
	obj1.display1();
	obj2.display2();
	obj3.display3();
	return 0;
}
