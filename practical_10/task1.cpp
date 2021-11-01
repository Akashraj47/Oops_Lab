#include <iostream>
using namespace std;
class personinfo
{
    string name;
    string address;
    string Telephone;
    string Mobile;
    string hof;
    public :
    void set()
    {
        cout << endl;
        cout << "Enter Name of a person:- ";
        cin >> name;
        cout << "Enter Address:- ";
        cin >> address;
        cout <<"Enter Telephone:- ";
        cin >>  Telephone;
        cout << "Enter Mobile number:- ";
        cin >> Mobile;
        cout << "Enter head of family:- ";
        cin >> hof;
    }
    void get()
    {
        cout << endl;
        cout << "Name of a person:- ";
        cout << name<<endl;
        cout << "Address:- ";
        cout << address<<endl;
        cout <<"Telephone:- ";
        cout << Telephone<< endl;
        cout << "Mobile number:- ";
        cout << Mobile<< endl;
        cout << "head of family:- ";
        cout << hof<< endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of persons you have to maintain the directory:- "<<endl;
    cin >> n;
    personinfo arr[n];
    for(int i = 0;i<n;i++)
    {
        arr[i].set();
    }
    for(int i = 0;i<n;i++)
    {
        arr[i].get();
    }
    
    return 0;
}
