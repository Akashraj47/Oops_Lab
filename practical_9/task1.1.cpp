#include <iostream>
using  namespace std;

class student
{
    public :
    int roll;
    long long int phone;
    string address;
    
    
};
int main()
{
    student sam,john;
    sam.roll = 1;
    sam.phone = 987654321;
    sam.address = "INDIA";
    john.roll = 2;
    john.phone = 123456789;
    john.address = "AMERICA";
    cout << "sam details :- " << sam.roll<<" "<< sam.phone<<" "<< sam.address<<" "<< endl;
    cout << "john details :- " << john.roll<<" "<< john.phone<<" "<< john.address<<" "<< endl;
    return 0;
}
