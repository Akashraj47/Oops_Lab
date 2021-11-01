#include <iostream>
using namespace std;
class number
{
    int a,b;
    public:
    number(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    friend int Remainder(number n1);
};
int Remainder(number n1)
{
    int rem;
    rem = n1.a%n1.b;
    return rem;
}
int main()
{
    int a,b;
    cout << "Enter 2 numbers" <<endl;
    cin >> a >> b;
    number n1(a,b);
    cout << "Remainder of entered number is:- "<<Remainder(n1) << endl;

    return 0;
}
