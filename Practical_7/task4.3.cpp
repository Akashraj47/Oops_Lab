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
            arr[i][j] = arr[i][j]-(2*i+j);
        }
    }
    cout << "output\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
