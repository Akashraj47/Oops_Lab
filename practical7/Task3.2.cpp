#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int k = 2,l=2,temp;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin >> arr[i][j];
         }
     }
     cout << "Reversed string is:- " <<endl;
     for(int i = 0;i<3;i++)
     {
         for(int j = 0;j<3;j++)
          {
            cout << 10 - arr[i][j] << " ";
           }
         cout << endl;
      }
          
    return 0;
 }
