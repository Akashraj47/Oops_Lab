#include <iostream>
using namespace std;
class a{
	public :
	int x;
	protected:
	int y;
	private:
	int z;
};
class b: private a{
public :
	   void display()
	{
		x = 10;
		y = 20;
		cout << x << " " << y << endl;
	}
};
int main()
{
	b obj;
	//obj.x = 10; erroe due to inherited in private mode
	//obj.y = 10; erroe due to inherited in private mode
	//obj.z = 10; erroe due to inherited in private mode
	obj.display();
	return 0;
}
