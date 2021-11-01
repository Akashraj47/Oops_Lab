#include <iostream>
using namespace std;
class student
{
    string name;
    int age;
    int marks;
    public:
    void setvalue()
    {
        cout << "Enter Name:- ";
        cin >> name;
        cout << "Enter age:-  ";
        cin >> age;
        cout << "Enter marks:- ";
        cin >> marks;
    }
    void print()
    {
        cout << endl ;
        cout << "name :- "<< name << endl;
        cout << "Age :- "<< age << endl;
        cout << "marks :- "<< marks << endl;
        cout << endl;
    }
    friend int getmarks(student s);
};
int getmarks(student s)
{
    return s.marks ;
}
int main()
{
    int Tmarks = 0;
    student s1,s2,s3;
    s1.setvalue();
    s2.setvalue();
    s3.setvalue();

    s1.print();
    s2.print();
    s3.print();

    Tmarks = getmarks(s1) + getmarks(s2) + getmarks(s3);
    cout << "Total  marks of students are :- "<<Tmarks;
    return 0;
}

