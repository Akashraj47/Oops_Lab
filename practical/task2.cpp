#include <iostream>
namespace first{
  int add(int a,int b)
  {
    return (a+b);
  }
}
namespace second{
  float add(float a,float b)
  {
    return (a+b);
  }
}
using namespace std;
using namespace first;
using namespace second;
int main()
{
  cout << add(1,2)<< endl;
   cout << add(1.f,1.2f) << endl;
  return 0;
}
