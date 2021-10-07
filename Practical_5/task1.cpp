#include <iostream>
using namespace std;
void func1()
{
    char a = 'a';
    cout << a << endl;
}
void func2()
{
    int a=10,b=9;bool c;
    c = (a>b);
    cout << c << endl;
   }
 void func3()
 {
    short a;
    a = 12;
    cout << a << endl;
    }
 void func4()
 {
    int a = 1234;
    cout << a << endl;
  }
  void func5()
  {
   float a = 12.5;
   cout << a << endl;
   }
  void func6()
  {
    long a = 123456;
        cout << a << endl;
    }
   void func7()
   {
    double a = 123.6748;
    cout << a << endl;
    }
    void func8()
    {
        long double a = 1234.7890;
            cout << a << endl;
            }
    void func9()
    {
        wchar_t a = L'\0';
        cout << a << endl;
       }
       
    int main()
    {
        func1();
        func2();
        func3();
        func4();
        func5();
        func6();
        func7();
        func8();
        func9();
     return 0;
    }
