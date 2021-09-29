#include<iostream>
using namespace std;
namespace first{
  void saysomething()
  {
     cout<<"Hello ";
  }
}
namespace second{
  void saysomething()
  {
    cout<<"Hello world ";
  }
}
//using namespace first;
//using namespace second;
int main()
{
  first::saysomething();
  second::saysomething();
  return 0;
}
