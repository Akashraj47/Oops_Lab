#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d,e,i,j;
    char f='a',g='c';
    cout << "The difference between c and a is : ";
    cout << int(g-f) << endl;
    a = "abc",b="abc",c="abcd",d="abcdefg",e="ab",i="ABC";
    cout << "Values after different comparision are : "<<endl;
    cout << c.compare(a) << endl;
    cout<< a.compare(c) << endl;
    cout<< a.compare(b) << endl;
    cout<< a.compare(d) << endl;
    cout<< d.compare(e) << endl;
    cout<< i.compare(a) << endl;

    return 0;
}

