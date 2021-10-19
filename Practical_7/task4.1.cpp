#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    cout << "Enter the elements of the array" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cin >> arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j] = i+1;
        }
    }
    cout << "output\n" ;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
