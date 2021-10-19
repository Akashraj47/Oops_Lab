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
   cout << "After reversing the array,new array is:" << endl;
     for(int i=2;i>=0;i--)
       {
         for (int j=2;j>=0;j--)
            {
               cout << arr[i][j] << " " ;
             }
             cout << "\n";
         }
 return 0;
 }
