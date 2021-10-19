#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;
int main()
{
     int i = 0,count=0,choice;
     char *ptr;
     time_t t = time(NULL);
     char ct[100];
     strcpy(ct,ctime(&t));
     ptr = ct;
     cout << "Press 1.Year 2.Month 3.Day"<<endl;
     cin >> choice;
     switch(choice)
     {
     	case 1:
     	cout << "Current Year is:-";
     for(int i =0;*(ptr+i)!='\0';i++)
     {
     	if(*(ptr+i) == ' ')
     	{
     		count += 1;
     	}
     	if(count == 4)
     	{
     		cout << *(ptr+i) ;
     	}
     }
     break;
     case 2:
     cout << "Current Month is:-";
     for(int i =0;*(ptr+i)!='\0';i++)
     {
     	if(*(ptr+i) == ' ')
     	{
     		count += 1;
     	}
     	if(count == 1 && count != 2)
     	{
     		cout << *(ptr+i) ;
     		if(count == 2)
     		{
     			break;
     		}
     		
     	}
     }
     cout << endl;
     break;
     case 3:
     cout << "Current date and Time is:- ";
      for(int i =0;*(ptr+i)!='\0';i++)
     {
     	if(*(ptr+i) == ' ')
     	{
     		count += 1;
     	}
     	if(count < 4)
     	{
     		cout << *(ptr+i) ;
     		if(count == 4)
     		{
     			break;
     		}
     		
     	}
     }
     cout << endl;
     break;
     case 4:
     cout <<"Not applicable"<<endl;
     break;
   }
     return 0;
 }
