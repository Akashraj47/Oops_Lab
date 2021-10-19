#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     int choice ;
     int year,mon;
     char Day[10];
     cout << "1.Year 2.Month 3.DAY"<<endl;
     cin >> choice;
     switch(choice)
     {
     	case 1:
     		year = 2021;
     		cout << year << endl;
     		break;
     	case 2:
     		mon = 10;
     		cout << mon << endl;
     		break;
     	case 3:
     		strcpy(Day,"Tuesday");
     		cout << Day;
     		break;
     	case 4:
     		cout << "Not applicable"<<endl;
     		break;
     }
     return 0;
  }
     		
