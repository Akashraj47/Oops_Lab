#include <iostream>
using namespace std;
class a{
	public :
	int x,y;
};
class b: public a{
public :
	void display()
	{
		x = 10;
		y = 20;
		cout << x <<" "<< y << endl;
	}
};
int main()
{
	b obj;
	obj.display();
	return 0;
}
