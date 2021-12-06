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
		
		cout << x <<" "<< y << endl;
	}
};
int main()
{
	b obj;
	obj.x = 30;
	obj.y = 40;
	obj.display();
	return 0;
}
