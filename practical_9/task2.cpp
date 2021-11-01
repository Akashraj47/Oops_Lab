#include <iostream>
using  namespace std;

class result
{
    public:
    void area(int a,int b)
    {
        cout << "Area of rectangle is :- " << a*b<<endl;
    }
    void area(int a)
    {
        cout <<"Area of square is :- "<<a*a<<endl;
    }
    
    
};
int main()
{
    result area;
    area.area(10,5);
    area.area(10);
    return 0;
}
