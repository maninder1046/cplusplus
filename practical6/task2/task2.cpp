#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str ;
  int i,n;
  cout<<"Enter string\n";
  getline(cin,str);
  cout<<"string is  :"<<str<<endl;
  n = str.length();
  for(i=0 ; i < n/2 ; i++)
  { 
    if(str[i] != str[n-i-1]){
      cout<<"string is not palindrome\n";
      exit(1);
      }
  }
  cout<<"string is palindrome\n";
  return 0;
  
}
