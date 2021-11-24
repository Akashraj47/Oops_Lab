#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] ;
    cout << "Enter elements in 3X3 matrix" << endl;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            if(count >= 5)
            {
                break;
            }
            int k = 0;
            k = arr[i][j];
            arr[i][j] = arr[2-i][2-j];
            arr[2-i][2-j] = k;
            count++;
        }
        if(count >= 5)
        {
            break;
        }
    }
    cout << "Reversed matrix is:- " << endl;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0 ; j<3;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
