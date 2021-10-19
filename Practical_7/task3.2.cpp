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
   cout << "Reversed array is:" << endl;
     for(int i=0;i<3;i++)
       {
         for(int j=0;j<3;j++)
         {
         cout << 10-arr[i][j] << " ";
       }
       cout << "\n";
       }
  return 0;
  }
