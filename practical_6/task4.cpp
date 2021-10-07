
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i = 0,flag;
    cout << "Enter a string" <<endl;
    getline(cin,a);
    cout << "Enter another string" <<endl;
    getline(cin,b);
    if(a.length()!=b.length())
    {
        cout << "String are not equall"<<endl;
    }
    else
    {
      while(a[i] != '\0')
    {
        if(a[i] == b[i])
        {
            flag = 0;
        }
        else
        {
            cout << "String are not equall"<<endl;
            flag = 1;
            break;
        }
        i++;
    }  
    }
    if(flag == 0)
    {
        cout << "String are equall" << endl;
    }

    return 0;
}

