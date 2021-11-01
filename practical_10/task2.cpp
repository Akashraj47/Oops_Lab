#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    char sec;
};
int main()
{
    student s1;
    student *ptr;
    ptr = &s1;
    cout << "Enter name of student:- ";
    cin >> ptr->name;
    cout << "Enter  roll no.:- ";
    cin >> ptr->roll;
    cout << "Enter section of student:- ";
    cin >> ptr->sec;
    cout << endl;
    cout << "Enter name of student:- ";
    cout << ptr->name << endl;
    cout << "Enter  roll no. :- ";
    cout << ptr->roll << endl;
    cout << "Enter section of student:- ";
    cout << ptr->sec <<endl;
    
    return 0;
}
