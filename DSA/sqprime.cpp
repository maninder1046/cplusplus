#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,i,c=0;
  cout<<"enter number\n";
  cin>>n;
  if(n==1)
     cout<<"not prime\n";
   else
   {
    for(i=2;i<=sqrt(n);i++)
    {
      if(n%i==0)
         c++;
    } 
  }
  if(c>0)
    cout<<"not prime\n";
  else
    cout<<"prime\n";
  return 0;    
}
