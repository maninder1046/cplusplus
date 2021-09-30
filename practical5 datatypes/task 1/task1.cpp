#include<iostream>
using namespace std;
void boolfun(){
  bool b = 1;
  cout<<"value in bool\t\t:"<<b<<endl;
}
void shortfun(){
  short s = 10;
  cout<<"value in short\t\t:"<<s<<endl;
}
void intfun(){
  int a = 31625;
  cout<<"value in integer\t:"<<a<<endl;
}
void charfun(){
   char ch = 'a';
  cout<<"value in char\t\t:"<<ch<<endl;
}
void floatfun(){
  float f = 10.123f;
  cout<<"value in float\t\t:"<<f<<endl;
}
void longfun(){
  long l = 10L;
  cout<<"value in long\t\t:"<<l<<endl;
}
void doublefun(){
   double d = 105463;
  cout<<"value in double\t\t:"<<d<<endl;
}
void longdoublefun(){
  long double ld = 324324;
  cout<<"value in long double\t:"<<ld<<endl;
}
void wcharfun(){
  wchar_t ch = L'!';
  cout<<"value in wide char\t:"<<ch<<endl;
}

int main(){
    boolfun();
    shortfun();
    intfun();
    charfun();
    floatfun();
    longfun();
    doublefun();
    longdoublefun();
    wcharfun();
    return 0;
}
