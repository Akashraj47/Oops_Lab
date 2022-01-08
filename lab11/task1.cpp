#include <iostream>
using namespace std; 

class A {
	
	public: 
	void display1 () {
	
	cout << "This is a method of class A" << endl;
	
	}
}; 
class B: public A {

	public: 
	
	void display2 () {
	cout << "This is a method of class B" << endl; 
	
	}	
}; 

int main () {
	
	B obj; 
	obj.display1(); 
	
	return 0;
	
}
