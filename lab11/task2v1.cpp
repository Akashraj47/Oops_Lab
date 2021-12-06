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
class b: public a{
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
	obj.x = 10;
	//obj.y = 20; - Error due to y is protected
	//obj.z = 20; - Error due to z is private
	obj.display();
	return 0;
}
