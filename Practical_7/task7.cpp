#include<bits/stdc++.h>
using namespace std;
int main()
{
  char arr[4][4];
  int k=3;
 for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
          {
     if( k > j)
       {
         arr[i][j] = ' ';
        }
        else
        {
           arr[i][j] = '*';
          }
          }
          k--;
          }
   for(int i=0;i<4;i++)
{ 
   for(int j=0;j<4;j++)
   {
     cout << arr[i][j];
     }
     cout << "\n";
     }
  return 0;
  }
