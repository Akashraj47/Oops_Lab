#include<bits/stdc++.h>
using namespace std;
int main()
{
  char arr[4][4];
  int k=0;
    for(int i=0;i<=3;i++)
      {
        for(int j=0;j<=3;j++)
        {
           if( j > 3-k)
           {
              arr[i][j] = ' ';
              }
              else
              {
                arr[i][j] = '*';
                }
                }
                k++;
                }
   for(int i=0;i<=3;i++)
   {
     for(int j=0;j<=3;j++)
      {
         cout << arr[i][j];
         }
         cout << "\n";
         }
         return 0;
  }


