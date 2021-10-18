#include<iostream>
using namespace std;
void fact(int n)
{
  int f=1;
  while(n!=1)
  {
   f*=n;
   n--;
  }
  cout<<f<<endl;
}
int main()
{
 int n;
 cout<<"Enter a number :";
 cin>>n;
 fact(n);
 return 0;
 
}
