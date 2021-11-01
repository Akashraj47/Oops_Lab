#include <iostream>
using  namespace std;

class student
{
    public:
    string name;
    int age;
    char sec;
    int year;
    int marks;
    
    
};
int main()
{
    int sum = 0;
    student arr[4];
    cout << "Enter details for 4" << endl;
    for(int i= 0;i<4;i++)
    {
        cout << "name :- ";
        cin >> arr[i].name;
        cout << "age :- ";
        cin >> arr[i].age;
        cout << "sec :- ";
        cin >> arr[i].sec;
        cout << "year :- ";
        cin >> arr[i].year;
        cout << "marks :- ";
        cin >> arr[i].marks;
        
    }
    for(int i= 0;i<4;i++)
    {
        cout << endl;
        cout << arr[i].name << endl;
        cout << arr[i].age << endl;
        cout << arr[i].sec << endl;
        cout << arr[i].year << endl;
        cout << arr[i].marks << endl;
        
        
    }
    cout << "Total marks is :- ";
    for(int i =0;i<4;i++)
    {
        sum = sum + arr[i].marks;
    }
    cout << sum <<endl;
    return 0;
}

